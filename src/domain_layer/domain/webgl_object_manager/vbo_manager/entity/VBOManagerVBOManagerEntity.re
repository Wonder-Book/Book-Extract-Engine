type t = {
  maximumId: VBOVBOManagerEntity.t,
  vertexBufferMap:
    ImmutableSparseMapContainerVO.t(
      VBOVBOManagerEntity.t,
      VertexBufferVBOManagerVO.t,
    ),
  indexBufferMap:
    ImmutableSparseMapContainerVO.t(
      VBOVBOManagerEntity.t,
      IndexBufferVBOManagerVO.t,
    ),
};

let createVBO = () => {
  let (newId, maximumId) =
    VBOManagerRepo.getMaximumId() |> VBOVBOManagerEntity.generateId;

  VBOManagerRepo.setMaximumId(maximumId);

  newId;
};

let initVBO = (gl, (vertices, indices), (vertexBuffer, indexBuffer)) => {
  (
    VBOVBOManagerEntity.createVertexBuffer(gl)
    |> VBOVBOManagerEntity.initVertexBuffer(gl, vertices),
    VBOVBOManagerEntity.createIndexBuffer(gl)
    |> VBOVBOManagerEntity.initIndexBuffer(gl, indices),
  );
};

let addVBO = (vbo, (vertexBuffer, indexBuffer)) => {
  VBOManagerRepo.addVBO(vbo, vertexBuffer, indexBuffer);
};

let getVBOBuffers = vbo => {
  VBOManagerRepo.getVBOBuffers(vbo);
};