type t =
  | Up(VectorMathVO.t);

let create = value => Up(value);

let value = up =>
  switch (up) {
  | Up(value) => value
  };