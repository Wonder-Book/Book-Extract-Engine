type shaderName =
  | ShaderName(string);

let create = value => ShaderName(value);

let value = name =>
  switch (name) {
  | ShaderName(value) => value
  };