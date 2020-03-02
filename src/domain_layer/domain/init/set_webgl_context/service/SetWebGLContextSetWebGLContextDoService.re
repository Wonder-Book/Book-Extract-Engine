let setGl = (contextConfigJsObj, canvas): ResultContainerVO.t(unit, Js.Exn.t) => {
  ContextContextEntity.setGl(contextConfigJsObj, canvas)
  |> ResultContainerVO.succeed;
};