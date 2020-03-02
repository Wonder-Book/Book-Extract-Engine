open Js.Typed_array;

type t =
  | Indices(Uint16Array.t);

let create = value => Indices(value);

let value = indices =>
  switch (indices) {
  | Indices(value) => value
  };

let map = (f, indices) => indices |> value |> f;

let length = indices => indices |> map(Uint16Array.length);