type triangle = {
  mMatrix: Js.Typed_array.Float32Array.t,
  vertexBuffer: WebGL1.buffer,
  indexBuffer: WebGL1.buffer,
  indexCount: int,
  colors: list((float, float, float)),
  program: WebGL1.program,
};

type triangles = list(triangle);

type camera = {
  vMatrix: Js.Typed_array.Float32Array.t,
  pMatrix: Js.Typed_array.Float32Array.t,
};

type gl = WebGL1.webgl1Context;

type t = (gl, camera, triangles);