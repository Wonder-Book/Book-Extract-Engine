open DataType;

open RenderType;

let _createVBOs = ((vertices, indices), gl) => {
  let vertexBuffer = Gl.createBuffer(gl);

  Gl.bindBuffer(Gl.getArrayBuffer(gl), vertexBuffer, gl);

  Gl.bufferFloat32Data(
    Gl.getArrayBuffer(gl),
    vertices,
    Gl.getStaticDraw(gl),
    gl,
  );

  let indexBuffer = Gl.createBuffer(gl);

  Gl.bindBuffer(Gl.getElementArrayBuffer(gl), indexBuffer, gl);

  Gl.bufferUint16Data(
    Gl.getElementArrayBuffer(gl),
    indices,
    Gl.getStaticDraw(gl),
    gl,
  );

  (vertexBuffer, indexBuffer);
};

let _getOrCreateVBOs = ({vertices, indices, vertexBuffer, indexBuffer}, gl) =>
  switch (vertexBuffer, indexBuffer) {
  | (None, None) => _createVBOs((vertices, indices), gl)
  | _ => (vertexBuffer |> Option.unsafeGet, indexBuffer |> Option.unsafeGet)
  };

let _initVBOs = (gl, state) =>
  GameObject.getGameObjectDataArr(state)
  |> Js.Array.map(
       ({transformData, geometryData, materialData} as gameObjectData) =>
       {
         ...gameObjectData,
         geometryData:
           _getOrCreateVBOs(geometryData, gl)
           |> GameObject.Geometry.setBufferts(_, geometryData),
       }
     )
  |> GameObject.setGameObjectDataArr(_, state);

let _getProgram = ({shaderName}, state) =>
  Shader.Program.unsafeGetProgram(shaderName, state);

let _changeGameObjectDataArrToRenderDataArr = (gameObjectDataArr, gl, state) =>
  gameObjectDataArr
  |> Js.Array.map(
       ({transformData, geometryData, materialData} as gameObjectData) => {
       let (vertexBuffer, indexBuffer) =
         GameObject.Geometry.unsafeGetBuffers(geometryData);

       {
         mMatrix: GameObject.Transform.getMMatrix(transformData),
         vertexBuffer,
         indexBuffer,
         indexCount:
           GameObject.Geometry.getIndices(geometryData)
           |> Js.Typed_array.Uint16Array.length,
         color: GameObject.Material.getColor(materialData),
         program: _getProgram(materialData, state),
       };
     });

let _sendAttributeData = (vertexBuffer, program, gl) => {
  let positionLocation = Gl.getAttribLocation(program, "a_position", gl);

  positionLocation === (-1) ?
    Error.error({j|Failed to get the storage location of a_position|j}) : ();

  Gl.bindBuffer(Gl.getArrayBuffer(gl), vertexBuffer, gl);

  Gl.vertexAttribPointer(
    positionLocation,
    3,
    Gl.getFloat(gl),
    false,
    0,
    0,
    gl,
  );
  Gl.enableVertexAttribArray(positionLocation, gl);
};

let _sendCameraUniformData = ((vMatrix, pMatrix), program, gl) => {
  let vMatrixLocation = Gl.getUniformLocation(program, "u_vMatrix", gl);
  let pMatrixLocation = Gl.getUniformLocation(program, "u_pMatrix", gl);

  Gl.uniformMatrix4fv(vMatrixLocation, false, vMatrix, gl);
  Gl.uniformMatrix4fv(pMatrixLocation, false, pMatrix, gl);
};

let _sendModelUniformData = ((mMatrix, color), program, gl) => {
  let mMatrixLocation = Gl.getUniformLocation(program, "u_mMatrix", gl);
  let colorLocation = Gl.getUniformLocation(program, "u_color", gl);

  let (r, g, b) = color;

  Gl.uniformMatrix4fv(mMatrixLocation, false, mMatrix, gl);
  Gl.uniform3f(colorLocation, r, g, b, gl);
};

let render = (gl, state) => {
  let (vMatrix, pMatrix) = (
    Camera.unsafeGetVMatrix(state),
    Camera.unsafeGetPMatrix(state),
  );

  let state = _initVBOs(gl, state);

  _changeGameObjectDataArrToRenderDataArr(
    GameObject.getGameObjectDataArr(state),
    gl,
    state,
  )
  |> Js.Array.forEach(
       ({mMatrix, vertexBuffer, indexBuffer, indexCount, color, program}) => {
       Gl.useProgram(program, gl);

       _sendAttributeData(vertexBuffer, program, gl);

       _sendCameraUniformData((vMatrix, pMatrix), program, gl);

       _sendModelUniformData((mMatrix, color), program, gl);

       Gl.bindBuffer(Gl.getElementArrayBuffer(gl), indexBuffer, gl);

       Gl.drawElements(
         Gl.getTriangles(gl),
         indexCount,
         Gl.getUnsignedShort(gl),
         0,
         gl,
       );
     });

  state;
};