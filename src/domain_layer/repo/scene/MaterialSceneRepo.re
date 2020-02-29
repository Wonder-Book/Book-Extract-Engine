open ScenePOType;

let create = (shader, colors) => {
  shader: shader |> ShaderShaderEntity.getId,
  colors: colors |> List.map(color => {color |> Color3ContainerVO.value}),
};