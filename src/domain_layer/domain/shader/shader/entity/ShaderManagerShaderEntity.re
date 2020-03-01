type t = {
  glsls: list((ShaderShaderEntity.t, GLSLShaderVO.t)),
  programMap:
    ImmutableHashMapContainerVO.t2(ShaderShaderEntity.t, ProgramShaderVO.t),
};

let addGLSL = (shader, glsl) => {
  ShaderManagerRepo.addGLSL(shader, glsl);
};

let getAllGLSL = () => {
  ShaderManagerRepo.getAllGLSL();
};