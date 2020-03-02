type id = int;

type t =
  | VBO(id);

let create = id => VBO(id);

let getId = vbo =>
  switch (vbo) {
  | VBO(id) => id
  };

let mapId = (f, vbo) => vbo |> getId |> f |> create;

let generateId = maximumId => {
  (maximumId, maximumId |> mapId(maximumId => {maximumId |> succ}));
};

let createVertexBuffer = (vertices, gl) => {
  let vertexBuffer = WebGL1.createBuffer(gl);

  WebGL1.bindBuffer(WebGL1.getArrayBuffer(gl), vertexBuffer, gl);

  WebGL1.bufferFloat32Data(
    WebGL1.getArrayBuffer(gl),
    vertices |> VerticesSceneGraphVO.value,
    WebGL1.getStaticDraw(gl),
    gl,
  );

  vertexBuffer |> VertexBufferVBOManagerVO.create;
};

let createIndexBuffer = (indices, gl) => {
  let indexBuffer = WebGL1.createBuffer(gl);

  WebGL1.bindBuffer(WebGL1.getElementArrayBuffer(gl), indexBuffer, gl);

  WebGL1.bufferUint16Data(
    WebGL1.getElementArrayBuffer(gl),
    indices |> IndicesSceneGraphVO.value,
    WebGL1.getStaticDraw(gl),
    gl,
  );

  indexBuffer |> IndexBufferVBOManagerVO.create;
};