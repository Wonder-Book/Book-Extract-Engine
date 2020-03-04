let init = contextConfigJsObj => {
  CanvasCanvasEntity.getCanvas()
  |> OptionContainerDoService.get
  |> ResultContainerVO.bind(canvas => {
       SetWebGLContextSetWebGLContextDoService.setGl(
         contextConfigJsObj,
         canvas,
       )
       |> ResultContainerVO.bind(() => {InitShaderInitShaderDoService.init()})
     })
  |> ResultContainerVO.handleFail(Error.throwError);
};

let _loopBody = () => {
  ClearColorClearColorDoService.clearColor()
  |> ResultContainerVO.bind(() => {
       ClearCanvasClearCanvasDoService.clearCanvas()
       |> ResultContainerVO.bind(() => {RenderRenderDoService.render()})
     });
};

let rec _loop = () =>
  DomExtend.requestAnimationFrame((time: float) => {
    _loopBody() |> ResultContainerVO.handleFail(Error.throwError) |> ignore;

    _loop() |> ignore;
  });

let start = () => {
  _loop();
};