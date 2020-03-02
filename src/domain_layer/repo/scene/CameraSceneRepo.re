let create =
    ((eye, center, up), (near, far, fovy, aspect)): ScenePOType.camera => {
  eye: eye |> EyeSceneGraphVO.value |> VectorMathVO.value,
  center: center |> CenterSceneGraphVO.value |> VectorMathVO.value,
  up: up |> UpSceneGraphVO.value |> VectorMathVO.value,
  near: NearSceneGraphVO.value(near),
  far: FarSceneGraphVO.value(far),
  fovy: FovySceneGraphVO.value(fovy),
  aspect: AspectSceneGraphVO.value(aspect),
};

let build =
    ({eye, center, up, near, far, fovy, aspect}: ScenePOType.camera)
    : CameraSceneGraphVO.t => {
  {
    eye: eye |> VectorMathVO.create |> EyeSceneGraphVO.create,
    center: center |> VectorMathVO.create |> CenterSceneGraphVO.create,
    up: up |> VectorMathVO.create |> UpSceneGraphVO.create,
    near: NearSceneGraphVO.create(near),
    far: FarSceneGraphVO.create(far),
    fovy: FovySceneGraphVO.create(fovy),
    aspect: AspectSceneGraphVO.create(aspect),
  };
};