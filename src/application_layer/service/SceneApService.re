let createTriangleVertexData = () => {
  let data = GeometrySceneGraphVO.createTriangleVertexData();

  //用于运行测试
  Js.log(data);

  data;
};

let addTriangle = (position, (vertices, indices), (shaderName, colors)) => {
  SceneSceneGraphEntity.addTriangle(
    position |> VectorMathVO.create |> PositionSceneGraphVO.create,
    (
      VerticesSceneGraphVO.create(vertices),
      IndicesSceneGraphVO.create(indices),
    ),
    (
      ShaderShaderEntity.create(shaderName),
      colors |> List.map(color => Color3ContainerVO.create(color)),
    ),
  );

  //用于运行测试
  Js.log(Repo.getScene());
};