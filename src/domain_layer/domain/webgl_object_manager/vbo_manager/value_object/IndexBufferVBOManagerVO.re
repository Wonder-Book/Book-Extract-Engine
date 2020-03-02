type t =
  | IndexBuffer(WebGL1.buffer);

let create = buffer => IndexBuffer(buffer);

let value = buffer =>
  switch (buffer) {
  | IndexBuffer(value) => value
  };