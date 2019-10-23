let addGLSL = (shaderName, (vs, fs), state) =>
  Shader.GLSL.addGLSL(
    ShaderWT.create(shaderName),
    (GLSLWT.VS.create(vs), GLSLWT.FS.create(fs)),
    state,
  );