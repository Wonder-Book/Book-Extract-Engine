type transform = {position: (float, float, float)};

type geometry = {
  vertices: Js.Typed_array.Float32Array.t,
  indices: Js.Typed_array.Uint16Array.t,
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

type scene = {triangles: list(triangle)};