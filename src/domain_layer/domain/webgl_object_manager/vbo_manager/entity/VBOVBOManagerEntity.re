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

let createVertexBuffer = gl => {
  WebGL1.createBuffer(gl) |> VertexBufferVBOManagerVO.create;
};

let createIndexBuffer = gl => {
  WebGL1.createBuffer(gl) |> IndexBufferVBOManagerVO.create;
};

let initVertexBuffer = (gl, vertices, vertexBuffer) => {
  let vertexBuffer = VertexBufferVBOManagerVO.value(vertexBuffer);

  WebGL1.bindBuffer(WebGL1.getArrayBuffer(gl), vertexBuffer, gl);

  WebGL1.bufferFloat32Data(
    WebGL1.getArrayBuffer(gl),
    vertices |> VerticesSceneGraphVO.value,
    WebGL1.getStaticDraw(gl),
    gl,
  );

  vertexBuffer |> VertexBufferVBOManagerVO.create;
};

let initIndexBuffer = (gl, indices, indexBuffer) => {
  let indexBuffer = IndexBufferVBOManagerVO.value(indexBuffer);

  WebGL1.bindBuffer(WebGL1.getElementArrayBuffer(gl), indexBuffer, gl);

  WebGL1.bufferUint16Data(
    WebGL1.getElementArrayBuffer(gl),
    indices |> IndicesSceneGraphVO.value,
    WebGL1.getStaticDraw(gl),
    gl,
  );

  indexBuffer |> IndexBufferVBOManagerVO.create;
};