let build = gl => {
  SceneSceneGraphEntity.getCamera()
  |> OptionContainerDoService.get
  |> ResultContainerVO.bind(
       ({eye, center, up, near, far, fovy, aspect}: CameraSceneGraphVO.t) => {
       let vMatrix =
         MatrixMathVO.createIdentityMatrix()
         |> MatrixMathVO.setLookAt(eye, center, up);

       MatrixMathVO.createIdentityMatrix()
       |> MatrixMathVO.buildPerspective((fovy, aspect, near, far))
       |> ResultContainerVO.bind(pMatrix => {
            (vMatrix |> MatrixMathVO.value, pMatrix |> MatrixMathVO.value)
            |> ResultContainerVO.tryCatch(((vMatrix, pMatrix)) => {
                 (
                   gl,
                   {vMatrix, pMatrix}: RenderRenderVO.camera,
                   SceneSceneGraphEntity.getAllTriangles()
                   |> List.map(
                        (
                          {transform, geometry, material}: TriangleSceneGraphVO.t,
                        ) => {
                        let {position}: TransformSceneGraphVO.t = transform;
                        let {vbo, indices}: GeometrySceneGraphVO.t = geometry;
                        let {shader, colors}: MaterialSceneGraphVO.t = material;

                        let (vertexBuffer, indexBuffer) =
                          VBOManagerVBOManagerEntity.getVBOBuffers(
                            vbo |> OptionContainerDoService.unsafeGet,
                          );

                        (
                          {
                            mMatrix:
                              MatrixMathVO.createIdentityMatrix()
                              |> MatrixMathVO.setTranslation(
                                   PositionSceneGraphVO.value(position),
                                 )
                              |> MatrixMathVO.value,
                            vertexBuffer:
                              vertexBuffer
                              |> OptionContainerDoService.unsafeGet
                              |> VertexBufferVBOManagerVO.value,
                            indexBuffer:
                              indexBuffer
                              |> OptionContainerDoService.unsafeGet
                              |> IndexBufferVBOManagerVO.value,
                            indexCount: IndicesSceneGraphVO.length(indices),
                            colors:
                              colors |> List.map(Color3ContainerVO.value),
                            program:
                              ShaderManagerShaderEntity.getProgram(shader)
                              |> OptionContainerDoService.unsafeGet,
                          }: RenderRenderVO.triangle
                        );
                      }),
                 )
               })
          });
     });
};