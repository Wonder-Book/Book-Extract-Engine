let createEmpty = (): Js.Dict.t(Js.Nullable.t('a)) => Js.Dict.empty();

let unsafeGet = (key: string, map) =>
  Js.Dict.unsafeGet(map, key) |> HashMapType.nullableToNotNullable;

/* TODO move to NullService */
let _isEmpty = value =>
  value === ObjMagic.convertToMagicType(Js.Nullable.null)
  || value === ObjMagic.convertToMagicType(Js.Nullable.undefined);

let get = (key: string, map) => {
  let value = unsafeGet(key, map);
  _isEmpty(value) ? None : Some(value);
};

/* let length = (map: Js.Dict.t(Js.Nullable.t('a))) =>
     Js.Array.length(Js.Dict.entries(map));

   let fromList = list =>
     list |> Js.Dict.fromList |> HashMapType.dictNotNullableToDictNullable;

   let has = (key: string, map) => !NullService.isEmpty(unsafeGet(key, map));

      */

let entries =
    (map: Js.Dict.t(Js.Nullable.t('a)))
    /* : array((Js.Dict.key, Js.Nullable.t('a))) => */
    : array((Js.Dict.key, 'a)) =>
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

/* let getValidValues = map =>
   map
   |> Js.Dict.values
   |> Js.Array.filter(value => value |> _isInMap)
   |> HashMapType.arrayNullableToArrayNotNullable; */

let _mutableSet = (key: string, value, map) => {
  Js.Dict.set(map, key, value);
  map;
};

let _createEmpty = (): Js.Dict.t('a) => Js.Dict.empty();

let copy =
    (map: Js.Dict.t(Js.Nullable.t('a))): Js.Dict.t(Js.Nullable.t('a)) =>
  map
  |> entries
  |> ArrayWT.reduceOneParam(
       (. newMap, (key, value)) => newMap |> _mutableSet(key, value),
       _createEmpty(),
     )
  |> HashMapType.dictNotNullableToDictNullable;
/*
 let map =
     (
       func: (. Js.Nullable.t('a)) => Js.Nullable.t('b),
       map: Js.Dict.t(Js.Nullable.t('a)),
     )
     : Js.Dict.t(Js.Nullable.t('b)) =>
   Js.Dict.map(func, map);

 let mapValid = (func, map) =>
   map
   |> Js.Dict.map((. value) =>
        if (NullService.isNotInMap(value)) {
          Js.Nullable.undefined;
        } else {
          func(. value |> SparseMapType.nullableToNotNullable)
          |> SparseMapType.notNullableToNullable;
        }
      ); */

/* let map =
       (func: (. 'a) => 'b, map: Js.Dict.t(Js.Nullable.t('a)))
       : Js.Dict.t(Js.Nullable.t('b)) =>
     Js.Dict.map(
       (. value) =>
         func(. value |> HashMapType.nullableToNotNullable)
         |> HashMapType.notNullableToNullable,
       map,
     );

   let mapValid =
       (func: (. 'a) => 'b, map: Js.Dict.t(Js.Nullable.t('a)))
       : Js.Dict.t(Js.Nullable.t('b)) =>
     map
     |> Js.Dict.map((. value) =>
          if (NullService.isNotInMap(value)) {
            Js.Nullable.undefined;
          } else {
            func(. value |> SparseMapType.nullableToNotNullable)
            |> SparseMapType.notNullableToNullable;
          }
        ); */