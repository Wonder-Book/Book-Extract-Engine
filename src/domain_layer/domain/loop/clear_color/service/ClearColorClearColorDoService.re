let clearColor = (): ResultContainerVO.t(unit, Js.Exn.t) => {
  ContextContextEntity.getGl()
  |> ResultContainerVO.mapSuccess(gl => {ContextContextEntity.clearColor(gl)});
};