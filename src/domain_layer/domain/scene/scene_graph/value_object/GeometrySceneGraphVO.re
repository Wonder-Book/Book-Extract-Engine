type t = {
  vertices: VerticesSceneGraphVO.t,
  indices: IndicesSceneGraphVO.t,
  vbo: option(VBOVBOManagerEntity.t),
};

let createTriangleVertexData = () => {
  open Js.Typed_array;

  let vertices =
    Float32Array.make([|0., 0.5, 0.0, (-0.5), (-0.5), 0.0, 0.5, (-0.5), 0.0|])
    |> VerticesSceneGraphVO.create;

  let indices = Uint16Array.make([|0, 1, 2|]) |> IndicesSceneGraphVO.create;

  (vertices, indices);
};

let hasVBO = vbo => {
  vbo |> OptionContainerDoService.isSome;
};