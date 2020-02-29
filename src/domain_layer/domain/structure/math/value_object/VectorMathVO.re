type t =
  | Vector(float, float, float);

let create = ((x, y, z)) => Vector(x, y, z);

let value = vec =>
  switch (vec) {
  | Vector(x, y, z) => (x, y, z)
  };