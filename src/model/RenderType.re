type renderData = {
  mMatrix: MatrixType.matrix,
  vertexBuffer: Gl.buffer,
  indexBuffer: Gl.buffer,
  indexCount: int,
  colors: array((float, float, float)),
  program: Gl.program,
};