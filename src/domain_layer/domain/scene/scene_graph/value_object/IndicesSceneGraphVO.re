open Js.Typed_array;

type t =
  | Indices(Uint16Array.t);

let create = value => Indices(value);