let createEmpty = (): Js.Dict.t(Js.Nullable.t('a)) => Js.Dict.empty();

let unsafeGetByNull = (key: string, map) =>
  Js.Dict.unsafeGet(map, key) |> HashMapType.nullableToNotNullable;

let _isEmpty = value => value |> Js.Nullable.test;

let get = (key: string, map) => {
  let value = Js.Dict.unsafeGet(map, key);
  _isEmpty(value) ? None : Some(value |> HashMapType.nullableToNotNullable);
};

let entries =
    (map: Js.Dict.t(Js.Nullable.t('a))): array((Js.Dict.key, 'a)) =>
  map |> Js.Dict.entries |> HashMapType.entriesNullableToEntriesNotNullable;

/* TODO move to NullService */
let _isInMap = value => value !== Js.Nullable.undefined;

let getValidEntries =
    (map: Js.Dict.t(Js.Nullable.t('a))): array((Js.Dict.key, 'a)) =>
  map
  |> entries
  |> HashMapType.entriesNotNullableToEntriesNullable
  |> Js.Array.filter(((key, value)) => value |> _isInMap)
  |> HashMapType.entriesNullableToEntriesNotNullable;

let _mutableSet = (key: string, value, map) => {
  Js.Dict.set(map, key, value);
  map;
};

let _createEmpty = (): Js.Dict.t('a) => Js.Dict.empty();

let copy =
    (map: Js.Dict.t(Js.Nullable.t('a))): Js.Dict.t(Js.Nullable.t('a)) =>
  map
  |> entries
  |> ArrayVO.reduceOneParam(
       (. newMap, (key, value)) => newMap |> _mutableSet(key, value),
       _createEmpty(),
     )
  |> HashMapType.dictNotNullableToDictNullable;