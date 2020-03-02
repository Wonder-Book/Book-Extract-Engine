type t =
  | VertexBuffer(WebGL1.buffer);

let create = buffer => VertexBuffer(buffer);

let value = buffer =>
  switch (buffer) {
  | VertexBuffer(value) => value
  };