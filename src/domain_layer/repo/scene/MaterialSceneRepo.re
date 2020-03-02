let create = (shader, colors): ScenePOType.material => {
  shader: shader |> ShaderShaderEntity.getId,
  colors: colors |> List.map(color => {color |> Color3ContainerVO.value}),
};

let build = ({shader, colors}: ScenePOType.material): MaterialSceneGraphVO.t => {
  shader: shader |> ShaderShaderEntity.create,
  colors: colors |> List.map(color => {color |> Color3ContainerVO.create}),
};