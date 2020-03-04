let addGLSL = (shaderName, glsl) => {
  ShaderManagerShaderEntity.addGLSL(
    ShaderShaderEntity.create(shaderName),
    GLSLShaderVO.create(glsl),
  );
};