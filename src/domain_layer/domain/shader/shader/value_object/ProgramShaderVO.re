type t =
  | Program(WebGL1.program);

let create = program => Program(program);

let value = program =>
  switch (program) {
  | Program(value) => value
  };