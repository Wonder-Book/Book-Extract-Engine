let addGLSL = (shaderName, glsl) => {
  ShaderManagerRepo.addGLSL(
    ShaderShaderEntity.create(shaderName),
    GLSLShaderVO.create(glsl),
  );

  //用于运行测试
  Js.log((shaderName, glsl));
};