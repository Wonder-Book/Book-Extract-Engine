let addGLSL = (shaderName, (vs, fs), state) =>
  Shader.GLSL.addGLSL(
    ShaderName.create(shaderName),
    (GLSLWT.VS.create(vs), GLSLWT.FS.create(fs)),
    state,
  );