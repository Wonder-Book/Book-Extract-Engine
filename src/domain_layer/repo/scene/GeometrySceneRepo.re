let create = (vertices, indices): ScenePOType.geometry => {
  vertices: vertices |> VerticesSceneGraphVO.value,
  indices: indices |> IndicesSceneGraphVO.value,
  vbo: None,
};

let build =
    ({vertices, indices, vbo}: ScenePOType.geometry): GeometrySceneGraphVO.t => {
  vertices: vertices |> VerticesSceneGraphVO.create,
  indices: indices |> IndicesSceneGraphVO.create,
  vbo: vbo |> OptionContainerDoService.map(VBOVBOManagerEntity.create),
};

let setVBO = (vbo, geometry): ScenePOType.geometry => {
  {...geometry, vbo: Some(vbo |> VBOVBOManagerEntity.getId)};
};