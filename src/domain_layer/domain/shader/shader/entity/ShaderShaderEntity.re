type shaderName = string;

type t =
  | Shader(shaderName, GLSLShaderVO.t);

let create = (shaderName, glsl) => Shader(shaderName, glsl);

let getShaderName = shader =>
  switch (shader) {
  | Shader(shaderName, glsl) => shaderName
  };

let getGLSL = shader =>
  switch (shader) {
  | Shader(shaderName, glsl) => glsl
  };