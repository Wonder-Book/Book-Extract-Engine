open DataType;

module Transform = {
  let createTransformData = mMatrix => {mMatrix: mMatrix};

  let getMMatrix = ({mMatrix}) => mMatrix;
};

module Geometry = {
  let createTriangleGeometryData = () => {
    open Js.Typed_array;

    let vertices =
      Float32Array.make([|
        0.,
        0.5,
        0.0,
        (-0.5),
        (-0.5),
        0.0,
        0.5,
        (-0.5),
        0.0,
      |])
      |> GeometryPoints.Vertices.create;

    let indices =
      Uint16Array.make([|0, 1, 2|]) |> GeometryPoints.Indices.create;

    (vertices, indices);
  };

  let createGeometryDataWithGeometryPoints = (vertices, indices) => {
    vertices,
    indices,
    vertexBuffer: None,
    indexBuffer: None,
  };

  /* let getVertexBuffer = (geometryData) => geometryData.vertexBuffer; */

  let getBuffers = ({vertexBuffer, indexBuffer}) => (
    vertexBuffer,
    indexBuffer,
  );

  let unsafeGetBuffers = ({vertexBuffer, indexBuffer}) => (
    vertexBuffer |> Option.unsafeGet,
    indexBuffer |> Option.unsafeGet,
  );

  let setBufferts = ((vertexBuffer, indexBuffer), geometryData) => {
    ...geometryData,
    vertexBuffer: Some(vertexBuffer),
    indexBuffer: Some(indexBuffer),
  };

  /* let getIndexBuffer = (geometryData) => geometryData.indexBuffer; */

  let getIndices = ({indices}) => indices;
};

module Material = {
  let createMaterialData = (shaderName, colors) => {shaderName, colors};

  let getColors = ({colors}) => colors;
};

let getGameObjectDataArr = state => state.allGameObjectData.gameObjectDataArr;

let setGameObjectDataArr = (gameObjectDataArr, state) => {
  ...state,
  allGameObjectData: {
    gameObjectDataArr: gameObjectDataArr,
  },
};

let createAllGameObjectData = () => {gameObjectDataArr: [||]};