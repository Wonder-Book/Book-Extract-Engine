type transform = {position: (float, float, float)};

type vboId = int;

type geometry = {
  vertices: Js.Typed_array.Float32Array.t,
  indices: Js.Typed_array.Uint16Array.t,
  vbo: option(vboId),
};

type material = {
  shader: string,
  colors: list((float, float, float)),
};

type triangle = {
  transform,
  geometry,
  material,
};

type camera = {
  eye: (float, float, float),
  center: (float, float, float),
  up: (float, float, float),
  near: float,
  far: float,
  fovy: float,
  aspect: float,
};

type scene = {
  triangles: list(triangle),
  camera: option(camera),
};