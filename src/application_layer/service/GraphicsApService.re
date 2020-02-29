let setClearColor = clearColor => {
  ContextContextEntity.setClearColor(Color4ContainerVO.create(clearColor));

  //用于运行测试
  Js.log(clearColor);
};