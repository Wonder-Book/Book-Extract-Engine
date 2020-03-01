let setGl = (contextConfigJsObj, canvas): ResultContainerVO.t(unit, 'a) => {
  ContextContextEntity.setGl(contextConfigJsObj, canvas)
  |> ResultContainerVO.succeed;
};