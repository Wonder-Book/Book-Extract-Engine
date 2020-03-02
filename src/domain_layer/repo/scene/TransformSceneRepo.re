let create = (position): ScenePOType.transform => {
  position: position |> PositionSceneGraphVO.value |> VectorMathVO.value,
};

let build = ({position}: ScenePOType.transform): TransformSceneGraphVO.t => {
  position: position |> VectorMathVO.create |> PositionSceneGraphVO.create,
};