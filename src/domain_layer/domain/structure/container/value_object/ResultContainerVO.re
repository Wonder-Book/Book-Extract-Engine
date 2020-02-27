type t('a, 'b) =
  | Success('a)
  | Fail('b);

let succeed = x => Success(x);

let fail = x => Fail(x);

let _raiseErrorAndReturn = msg => Js.Exn.raiseError(msg);

let failWith = x => (x |> _raiseErrorAndReturn)->Fail;

let either = (successFunc, failureFunc, twoTrackInput) =>
  switch (twoTrackInput) {
  | Success(s) => successFunc(s)
  | Fail(f) => failureFunc(f)
  };

let bind = (switchFunc, twoTrackInput) =>
  either(switchFunc, fail, twoTrackInput);

let tap = (oneTrackFunc, twoTrackInput) =>
  either(
    result => {
      result |> oneTrackFunc |> ignore;
      result |> succeed;
    },
    fail,
    twoTrackInput,
  );

let tryCatch = (oneTrackFunc: 'a => 'b, x: 'a): t('b, Js.Exn.t) =>
  try(oneTrackFunc(x) |> succeed) {
  | Js.Exn.Error(e) => fail(e)
  | err => {j|unknown error: $err|j} |> _raiseErrorAndReturn |> fail
  };

let mapSuccess = (mapFunc, result) =>
  switch (result) {
  | Success(s) => mapFunc(s) |> succeed
  | Fail(f) => fail(f)
  };

let _returnMagicValue = _ => Obj.magic(-1);

let getSuccessValue = (handleFailFunc: 'f => unit, result: t('s, 'f)): 's =>
  switch (result) {
  | Success(s) => s
  | Fail(f) => handleFailFunc(f) |> _returnMagicValue
  };