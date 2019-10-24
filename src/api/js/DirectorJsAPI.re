let initAll = (contextParam, state) =>
  Director.initAll(contextParam, state)
  |> Result.getSuccessValue(Error.throwError);

let rec _loop = () =>
  DomExtend.requestAnimationFrame((time: float) => {
    Data.unsafeGetState()
    |> Director.loopBody
    |> Result.tap(state => state |> Data.setState)
    |> Result.getSuccessValue(Error.throwError)
    |> ignore;

    _loop() |> ignore;
  });

let loop = state => {
  Data.setState(state) |> ignore;

  _loop();
};