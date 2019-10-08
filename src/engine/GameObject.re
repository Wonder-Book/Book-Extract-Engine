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
      |]);

    let indices = Uint16Array.make([|0, 1, 2|]);

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
  /* let getIndexBuffer = (geometryData) => geometryData.indexBuffer; */

  let getIndices = ({indices}) => indices;
};

module Material = {
  let createMaterialData = (shaderName, color) => {shaderName, color};

  let getColor = ({color}) => color;
};

let createAllGameObjectData = () => {gameObjectDataArr: [||]};

let getGameObjectDataArr = state => state.allGameObjectData.gameObjectDataArr;

let _setGameObjectDataArr = (gameObjectDataArr, state) => {
  ...state,
  allGameObjectData: {
    gameObjectDataArr: gameObjectDataArr,
  },
};

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, color), state) =>
  _setGameObjectDataArr(
    getGameObjectDataArr(state)
    |> ArrayUtils.push({
         transformData: Transform.createTransformData(mMatrix),
         geometryData:
           Geometry.createGeometryDataWithGeometryPoints(vertices, indices),
         materialData: Material.createMaterialData(shaderName, color),
       }),
    state,
  );