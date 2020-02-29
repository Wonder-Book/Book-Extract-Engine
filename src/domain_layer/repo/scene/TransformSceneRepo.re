open ScenePOType;

let create = position => {
  position: position |> PositionSceneGraphVO.value |> VectorMathVO.value,
};