type renderData = {
  mMatrix: Js.Typed_array.Float32Array.t,
  vertexBuffer: Gl.buffer,
  indexBuffer: Gl.buffer,
  indexCount: int,
  colors: array((float, float, float)),
  program: Gl.program,
};