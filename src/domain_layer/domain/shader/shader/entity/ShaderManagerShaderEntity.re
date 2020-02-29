type t = {glsls: list((ShaderShaderEntity.t, GLSLShaderVO.t))};

let addGLSL = (shader, glsl) => {
  ShaderManagerRepo.addGLSL(shader, glsl);
};