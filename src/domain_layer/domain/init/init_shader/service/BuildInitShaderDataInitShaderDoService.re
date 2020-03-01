let build = () => {
  ShaderManagerShaderEntity.getAllGLSL()
  |> List.map(((shaderName, glsl)) => {
       (
         {
           shaderId: ShaderShaderEntity.getId(shaderName),
           vs: GLSLShaderVO.getVS(glsl),
           fs: GLSLShaderVO.getFS(glsl),
         }: InitShaderInitShaderVO.singleInitShader
       )
     });
};