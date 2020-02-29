type t =
  | Center(VectorMathVO.t);

let create = value => Center(value);

let value = center =>
  switch (center) {
  | Center(value) => value
  };