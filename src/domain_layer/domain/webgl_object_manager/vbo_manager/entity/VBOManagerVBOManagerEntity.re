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

// let hasVBO = vbo => {
//   VBOManagerRepo.hashVBO(vbo);
// };

// let _genearteId = () => {
// let newId =  VBOManagerRepo.getMaximumId() |> VBOVBOManagerEntity.buildNewId;

// VBOVBOManagerEntity.increaseMaximumId(newId)
// |> VBOManagerRepo.setMaximumId;

// newId

// };

let addVBO = (vertexBuffer, indexBuffer) => {
  let (newId, maximumId) =
    VBOManagerRepo.getMaximumId() |> VBOVBOManagerEntity.generateId;

  VBOManagerRepo.setMaximumId(maximumId);

  VBOManagerRepo.addVBO(newId, vertexBuffer, indexBuffer);

  newId;
};

let getVBOBuffers = vbo => {
  VBOManagerRepo.getVBOBuffers(vbo);
};