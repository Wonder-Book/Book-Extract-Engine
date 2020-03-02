type vboId = int;

type vboManager = {
  maximumId: vboId,
  vertexBufferMap: ImmutableSparseMap.t(vboId, WebGL1.buffer),
  indexBufferMap: ImmutableSparseMap.t(vboId, WebGL1.buffer),
};