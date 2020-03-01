let reduceOneParam = (func, param, arr) => {
  //优化：使用for循环和mutable变量来实现Array.reduce
  let mutableParam = ref(param);
  for (i in 0 to Js.Array.length(arr) - 1) {
    mutableParam := func(. mutableParam^, Array.unsafe_get(arr, i));
  };
  mutableParam^;
};