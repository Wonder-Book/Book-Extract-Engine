let addGLSL = (shaderName, (vs, fs), state) =>
  Shader.GLSL.addGLSL(
    ShaderName.create(shaderName),
    (GLSLVO.VS.create(vs), GLSLVO.FS.create(fs)),
    state,
  );