let setClearColor = clearColor => {
  Color4ContainerVO.create(clearColor) |> ContextRepo.setClearColor;

  //用于运行测试
  Js.log(clearColor);
};