open VBOManagerPOType;

let _getMaximumId = ({maximumId}) => maximumId;

let getMaximumId = () => {
  _getMaximumId(Repo.getVBOManager()) |> VBOVBOManagerEntity.create;
};

let setMaximumId = maximumId => {
  Repo.setVBOManager({
    ...Repo.getVBOManager(),
    maximumId: VBOVBOManagerEntity.getId(maximumId),
  });
};

let _getVertexBufferMap = ({vertexBufferMap}) => vertexBufferMap;

let _getIndexBufferMap = ({indexBufferMap}) => indexBufferMap;

let addVBO = (vbo, vertexBuffer, indexBuffer) => {
  // TODO add check: buffer shouldn't exist
  Repo.setVBOManager({
    ...Repo.getVBOManager(),
    vertexBufferMap:
      _getVertexBufferMap(Repo.getVBOManager())
      |> ImmutableSparseMap.set(
           VBOVBOManagerEntity.getId(vbo),
           VertexBufferVBOManagerVO.value(vertexBuffer),
         ),

    indexBufferMap:
      _getIndexBufferMap(Repo.getVBOManager())
      |> ImmutableSparseMap.set(
           VBOVBOManagerEntity.getId(vbo),
           IndexBufferVBOManagerVO.value(indexBuffer),
         ),
  });
};

let getVBOBuffers = vbo => {
  let vboId = VBOVBOManagerEntity.getId(vbo);

  (
    _getVertexBufferMap(Repo.getVBOManager())
    |> ImmutableSparseMap.get(vboId)
    |> OptionContainerDoService.map(VertexBufferVBOManagerVO.create),
    _getIndexBufferMap(Repo.getVBOManager())
    |> ImmutableSparseMap.get(vboId)
    |> OptionContainerDoService.map(IndexBufferVBOManagerVO.create),
  );
};