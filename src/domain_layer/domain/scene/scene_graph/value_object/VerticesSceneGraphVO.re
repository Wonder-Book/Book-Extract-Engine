open Js.Typed_array;

type t =
  | Vertices(Float32Array.t);

let create = value => Vertices(value);