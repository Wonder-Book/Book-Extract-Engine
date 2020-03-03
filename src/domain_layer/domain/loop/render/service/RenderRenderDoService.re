let _initGlState = gl => {
  ContextContextEntity.enableDepthTest(gl);
  ContextContextEntity.enableBackCullFace(gl);
};

let _initVBOs = gl => {
  SceneSceneGraphEntity.getAllTriangles()
  |> List.iteri((triangleIndex, {geometry}: TriangleSceneGraphVO.t) => {
       let {vbo, vertices, indices}: GeometrySceneGraphVO.t = geometry;

       GeometrySceneGraphVO.hasVBO(vbo)
         ? {
           ();
         }
         : {
           let vbo = VBOManagerVBOManagerEntity.createVBO();

           (
             VBOVBOManagerEntity.createVertexBuffer(gl),
             VBOVBOManagerEntity.createIndexBuffer(gl),
           )
           |> VBOManagerVBOManagerEntity.initVBO(gl, (vertices, indices))
           |> VBOManagerVBOManagerEntity.addVBO(vbo);

           SceneSceneGraphEntity.setVBO(vbo, triangleIndex);
         };
     });
};

let _sendAttributeData = (vertexBuffer, program, gl) => {
  let positionLocation =
    ContextContextEntity.getAttribLocation(program, "a_position", gl);

  positionLocation === (-1)
    ? Error.error({j|Failed to get the storage location of a_position|j}) : ();

  ContextContextEntity.bindBuffer(
    ContextContextEntity.getArrayBuffer(gl),
    vertexBuffer,
    gl,
  );

  ContextContextEntity.vertexAttribPointer(
    ~gl,
    ~location=positionLocation,
    ~size=3,
    (),
  );
  ContextContextEntity.enableVertexAttribArray(positionLocation, gl);
};

let _sendCameraUniformData = ((vMatrix, pMatrix), program, gl) => {
  let vMatrixLocation =
    ContextContextEntity.unsafeGetUniformLocation(program, "u_vMatrix", gl);
  let pMatrixLocation =
    ContextContextEntity.unsafeGetUniformLocation(program, "u_pMatrix", gl);

  ContextContextEntity.uniformMatrix4fv(
    ~location=vMatrixLocation,
    ~value=vMatrix,
    ~gl,
    (),
  );
  ContextContextEntity.uniformMatrix4fv(
    ~location=pMatrixLocation,
    ~value=pMatrix,
    ~gl,
    (),
  );
};

let _sendModelUniformData = ((mMatrix, colors), program, gl) => {
  let mMatrixLocation =
    ContextContextEntity.unsafeGetUniformLocation(program, "u_mMatrix", gl);

  colors
  |> List.iteri((index, (r, g, b)) => {
       let colorLocation =
         ContextContextEntity.unsafeGetUniformLocation(
           program,
           {j|u_color$index|j},
           gl,
         );

       ContextContextEntity.uniform3f(colorLocation, r, g, b, gl);
     });

  ContextContextEntity.uniformMatrix4fv(
    ~location=mMatrixLocation,
    ~value=mMatrix,
    ~gl,
    (),
  );
  (mMatrixLocation, false, mMatrix, gl);
};

let render = () => {
  ContextContextEntity.getGl()
  |> ResultContainerVO.bind(gl => {
       _initGlState(gl);

       _initVBOs(gl);

       BuildRenderDataRenderDoService.build(gl)
       |> ResultContainerVO.bind(renderData => {
            renderData
            |> ResultContainerVO.tryCatch(
                 (
                   (gl, {vMatrix, pMatrix}: RenderRenderVO.camera, triangles),
                 ) => {
                 triangles
                 |> List.iter(
                      (
                        {
                          mMatrix,
                          vertexBuffer,
                          indexBuffer,
                          indexCount,
                          colors,
                          program,
                        }: RenderRenderVO.triangle,
                      ) => {
                      ContextContextEntity.useProgram(program, gl);

                      _sendAttributeData(vertexBuffer, program, gl);

                      _sendCameraUniformData(
                        (vMatrix, pMatrix),
                        program,
                        gl,
                      );

                      _sendModelUniformData((mMatrix, colors), program, gl);

                      ContextContextEntity.bindBuffer(
                        WebGL1.getElementArrayBuffer(gl),
                        indexBuffer,
                        gl,
                      );

                      ContextContextEntity.drawElements(
                        ~gl,
                        ~count=indexCount,
                        (),
                      );
                    })
               })
          });
     });
};