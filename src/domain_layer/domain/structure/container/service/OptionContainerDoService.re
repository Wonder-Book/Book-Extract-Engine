//如果option为Some(v)，返回v；否则抛出异常
let unsafeGetByThrow = optionData => optionData |> Js.Option.getExn;

//用Result来安全地取出option的值
let get = optionData => {
  switch (optionData) {
  | None => ResultContainerVO.failWith({|data not exist(get by getExn)|})
  | Some(data) => ResultContainerVO.succeed(data)
  };
};