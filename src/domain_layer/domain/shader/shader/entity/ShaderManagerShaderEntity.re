type t = {glsls: list(ShaderShaderEntity.t)};

let addGLSL = shader => {
  ShaderManagerRepo.addGLSL(shader);
};