type t =
  | GLSL(string, string);

let create = ((vs, fs)) => GLSL(vs, fs);

let value = glsl =>
  switch (glsl) {
  | GLSL(vs, fs) => (vs, fs)
  };