type t =
  | Eye(VectorMathVO.t);

let create = value => Eye(value);

let value = eye =>
  switch (eye) {
  | Eye(value) => value
  };