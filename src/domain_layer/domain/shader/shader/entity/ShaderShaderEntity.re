type shaderName = string;
type id = shaderName;

type t =
  | Shader(id);

let create = id => Shader(id);

let getId = shader =>
  switch (shader) {
  | Shader(id) => id
  };