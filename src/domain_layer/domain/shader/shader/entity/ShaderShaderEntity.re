type shaderName = string;

type t =
  | Shader(shaderName);

let create = shaderName => Shader(shaderName);

let value = shader =>
  switch (shader) {
  | Shader(shaderName) => shaderName
  };