let initAll = (contextParam, state) =>
  Director.initAll(contextParam, state)
  |> Result.getSuccessValue(ErrorService.throwError);

let rec _loop = () =>
  DomExtend.requestAnimationFrame((time: float) => {
    Data.unsafeGetStateByThrow()
    |> Director.loopBody
    |> Result.tap(state => state |> Data.setState)
    |> Result.getSuccessValue(ErrorService.throwError)
    |> ignore;

    _loop() |> ignore;
  });

let loop = state => {
  Data.setState(state) |> ignore;

  _loop();
};