type t =
  | Position(VectorMathVO.t);

let create = value => Position(value);

let value = position =>
  switch (position) {
  | Position(pos) => pos
  };