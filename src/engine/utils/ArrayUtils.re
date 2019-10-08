/*! named ArrayUtils instead of Array is to avoid to conflict with the bucklescript->array
 */

let push = (item, arr) => {
  arr |> Js.Array.push(item) |> ignore;
  arr;
};

let reduceOneParam = (func, param, arr) => {
  let mutableParam = ref(param);
  for (i in 0 to Js.Array.length(arr) - 1) {
    mutableParam := func(. mutableParam^, Array.unsafe_get(arr, i));
  };
  mutableParam^;
};