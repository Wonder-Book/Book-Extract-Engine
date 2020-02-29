open ScenePOType;

let create = ((eye, center, up), (near, far, fovy, aspect)) => {
  eye: eye |> EyeSceneGraphVO.value |> VectorMathVO.value,
  center: center |> CenterSceneGraphVO.value |> VectorMathVO.value,
  up: up |> UpSceneGraphVO.value |> VectorMathVO.value,
  near: NearSceneGraphVO.value(near),
  far: FarSceneGraphVO.value(far),
  fovy: FovySceneGraphVO.value(fovy),
  aspect: AspectSceneGraphVO.value(aspect),
};