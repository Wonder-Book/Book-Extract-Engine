type t('key, 'value) = HashMapContainerType.t('key, 'value);

let createEmpty = HashMapContainer.createEmpty;

let set =
    (key: string, value: 'a, map: HashMapContainerType.t2('a))
    : HashMapContainerType.t2('a) => {
  let newMap = map |> HashMapContainer.copy;

  Js.Dict.set(newMap, key, value);

  newMap;
};

let get = HashMapContainer.get;