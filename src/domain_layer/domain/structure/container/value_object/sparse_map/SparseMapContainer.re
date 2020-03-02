let createEmpty = (): SparseMapContainerType.t2('a) => [||];

let copy = Js.Array.copy;

let _unsafeGet = (index: int, map: SparseMapContainerType.t2('a)): 'a => {
  Array.unsafe_get(map, index);
};

let _isEmpty = (value: 'a): bool =>
  value |> SparseMapContainerType.notNullableToNullable |> Js.Nullable.test;

let get = (index: int, map) => {
  let value = _unsafeGet(index, map);
  _isEmpty(value) ? None : Some(value);
};

let has = (index: int, map) => !_isEmpty(_unsafeGet(index, map));