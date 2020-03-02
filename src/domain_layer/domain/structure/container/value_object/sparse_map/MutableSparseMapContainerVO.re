type t('index, 'value) = SparseMapContainerType.t('index, 'value);

let createEmpty = SparseMapContainer.createEmpty;

let copy = SparseMapContainer.copy;

let get = SparseMapContainer.get;

let has = SparseMapContainer.has;

let set =
    (key: int, value: 'a, map: SparseMapContainerType.t2('a))
    : SparseMapContainerType.t2('a) => {
  Array.unsafe_set(map, key, value);

  map;
};