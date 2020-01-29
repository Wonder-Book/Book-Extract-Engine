type renderData = {
  mMatrix: Js.Typed_array.Float32Array.t,
  vertexBuffer: Gl.buffer,
  indexBuffer: Gl.buffer,
  indexCount: int,
  colors: list((float, float, float)),
  program: Gl.program,
};