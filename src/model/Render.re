open DataType;

open RenderDataType;

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

  (
    vertexBuffer |> VBO.VertexBuffer.create,
    indexBuffer |> VBO.IndexBuffer.create,
  );
};

let _getOrCreateVBOs = ({vertices, indices, vertexBuffer, indexBuffer}, gl) =>
  switch (vertexBuffer, indexBuffer) {
  | (None, None) =>
    _createVBOs(
      (
        vertices |> GeometryPoints.Vertices.value,
        indices |> GeometryPoints.Indices.value,
      ),
      gl,
    )
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
  Shader.Program.unsafeGetProgram(shaderName |> ShaderWT.value, state);

let _changeGameObjectDataArrToRenderDataArr = (gameObjectDataArr, gl, state) =>
  gameObjectDataArr
  |> Js.Array.map(
       ({transformData, geometryData, materialData} as gameObjectData) => {
       let (vertexBuffer, indexBuffer) =
         GameObject.Geometry.unsafeGetBuffers(geometryData);

       {
         mMatrix:
           GameObject.Transform.getMMatrix(transformData)
           |> CoordinateTransformationMatrix.Model.getMatrixValue,
         vertexBuffer: vertexBuffer |> VBO.VertexBuffer.value,
         indexBuffer: indexBuffer |> VBO.IndexBuffer.value,
         indexCount:
           GameObject.Geometry.getIndices(geometryData)
           |> GeometryPoints.Indices.length,
         colors:
           GameObject.Material.getColors(materialData)
           |> Js.Array.map(color => color |> Color.Color3.value),
         program: _getProgram(materialData, state),
       };
     });

let _sendAttributeData = (vertexBuffer, program, gl) => {
  let positionLocation = Gl.getAttribLocation(program, "a_position", gl);

  positionLocation === (-1) ?
    Error.raiseError({j|Failed to get the storage location of a_position|j}) : ();

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

let _sendModelUniformData = ((mMatrix, colors), program, gl) => {
  let mMatrixLocation = Gl.getUniformLocation(program, "u_mMatrix", gl);

  colors
  |> Js.Array.forEachi(((r, g, b), index) => {
       let colorLocation =
         Gl.getUniformLocation(program, {j|u_color$index|j}, gl);

       Gl.uniform3f(colorLocation, r, g, b, gl);
     });

  Gl.uniformMatrix4fv(mMatrixLocation, false, mMatrix, gl);
};

let render = (gl, state) => {
  let (vMatrix, pMatrix) = (
    Camera.unsafeGetVMatrix(state),
    Camera.unsafeGetPMatrix(state),
  );
  let (vMatrix, pMatrix) = (
    vMatrix |> CoordinateTransformationMatrix.View.getMatrixValue,
    pMatrix |> CoordinateTransformationMatrix.Projection.getMatrixValue,
  );

  let state = _initVBOs(gl, state);

  _changeGameObjectDataArrToRenderDataArr(
    GameObject.getGameObjectDataArr(state),
    gl,
    state,
  )
  |> Result.tryCatch(renderDataArr =>
       renderDataArr
       |> Js.Array.forEach(
            (
              {
                mMatrix,
                vertexBuffer,
                indexBuffer,
                indexCount,
                colors,
                program,
              },
            ) => {
            Gl.useProgram(program, gl);

            _sendAttributeData(vertexBuffer, program, gl);

            _sendCameraUniformData((vMatrix, pMatrix), program, gl);

            _sendModelUniformData((mMatrix, colors), program, gl);

            Gl.bindBuffer(Gl.getElementArrayBuffer(gl), indexBuffer, gl);

            Gl.drawElements(
              Gl.getTriangles(gl),
              indexCount,
              Gl.getUnsignedShort(gl),
              0,
              gl,
            );
          })
     )
  |> Result.mapSuccess(() => state);
};