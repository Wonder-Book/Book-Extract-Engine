let init = contextConfigJsObj => {
  CanvasCanvasEntity.getCanvas()
  |> ResultContainerVO.bind(canvas => {
       SetWebGLContextSetWebGLContextDoService.setGl(
         contextConfigJsObj,
         canvas,
       )
       |> ResultContainerVO.bind(() => {InitShaderInitShaderDoService.init()})
     })
  |> ResultContainerVO.handleFail(Error.throwError);
};