open ScenePOType;

let create = (vertices, indices) => {
  vertices: vertices |> VerticesSceneGraphVO.value,
  indices: indices |> IndicesSceneGraphVO.value,
};