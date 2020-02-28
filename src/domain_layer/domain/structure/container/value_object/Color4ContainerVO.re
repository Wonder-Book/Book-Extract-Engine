type r = float;
type g = float;
type b = float;
type a = float;

type t =
  | Color4(r, g, b, a);

let create = ((r, g, b, a)) => Color4(r, g, b, a);

let value = color =>
  switch (color) {
  | Color4(r, g, b, a) => (r, g, b, a)
  };