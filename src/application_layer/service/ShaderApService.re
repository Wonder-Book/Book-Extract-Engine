let addGLSL = (shaderName, glsl) => {
  ShaderManagerShaderEntity.addGLSL(
    ShaderShaderEntity.create(shaderName, GLSLShaderVO.create(glsl)),
  );

  //用于运行测试
  Js.log((shaderName, glsl));
};