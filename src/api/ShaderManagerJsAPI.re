let addGLSL = (shaderName, (vs, fs), state) =>
  ShaderManager.GLSL.addGLSL(
    ShaderName.create(shaderName),
    (GLSLVO.VS.create(vs), GLSLVO.FS.create(fs)),
    state,
  );