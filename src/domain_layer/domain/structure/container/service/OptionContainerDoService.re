//如果option为Some(v)，返回v；否则抛出异常
let unsafeGet = optionData => optionData |> Js.Option.getExn;

//通过使用Result，安全地取出option的值
let get = optionData => {
  switch (optionData) {
  | None => ResultContainerVO.failWith({|data not exist(get by getExn)|})
  | Some(data) => ResultContainerVO.succeed(data)
  };
};

let isSome = Js.Option.isSome;

let map = (func, optionData) =>
  optionData |> Js.Option.map((. data) => func(data));