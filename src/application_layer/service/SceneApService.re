let createTriangleVertexData = () => {
  let (vertices, indices) = GeometrySceneGraphVO.createTriangleVertexData();

  (
    vertices |> VerticesSceneGraphVO.value,
    indices |> IndicesSceneGraphVO.value,
  );
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
};

let setCamera = ((eye, center, up), (near, far, fovy, aspect)) => {
  SceneSceneGraphEntity.setCamera(
    (
      EyeSceneGraphVO.create(eye),
      CenterSceneGraphVO.create(center),
      UpSceneGraphVO.create(up),
    ),
    (
      NearSceneGraphVO.create(near),
      FarSceneGraphVO.create(far),
      FovySceneGraphVO.create(fovy),
      AspectSceneGraphVO.create(aspect),
    ),
  );
};