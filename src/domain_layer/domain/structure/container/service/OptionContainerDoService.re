let unsafeGet = optionData => optionData |> Js.Option.getExn;

let get = optionData => {
  switch (optionData) {
  | None => ResultContainerVO.failWith({|data not exist(get by getExn)|})
  | Some(data) => ResultContainerVO.succeed(data)
  };
};

let isSome = Js.Option.isSome;

let map = (func, optionData) =>
  optionData |> Js.Option.map((. data) => func(data));