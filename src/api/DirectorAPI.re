let initAll = (contextParam, state) =>
  Director.initAll(contextParam, state)
  |> Result.getSuccessValue(err => Error.throwError(err));

let rec _loop = () =>
  DomExtend.requestAnimationFrame((time: float) => {
    Data.unsafeGetState()
    |> Director.loopBody
    |> Result.bind(state => state |> Data.setState |> Result.succeed)
    |> Result.getSuccessValue(err => Error.throwError(err))
    |> ignore;

    _loop() |> ignore;
  });

let loop = state => {
  Data.setState(state) |> ignore;

  _loop();
};