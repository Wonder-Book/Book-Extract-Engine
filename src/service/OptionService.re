let unsafeGetByThrow = optionData => {
  optionData |> Js.Option.getExn;
};