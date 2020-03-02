type t('key, 'value) = HashMapContainerType.t('key, 'value);

let createEmpty = HashMapContainer.createEmpty;

let set = (key: string, value: 'a, map: HashMapContainerType.t2('a)) => {
  Js.Dict.set(map, key, value);

  map;
};

let get = HashMapContainer.get;