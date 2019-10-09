open DataType;

let createTriangleGeometryData = GameObject.Geometry.createTriangleGeometryData;

let _setGameObjectDataArr = (gameObjectDataArr, state) => {
  ...state,
  allGameObjectData: {
    gameObjectDataArr: gameObjectDataArr,
  },
};

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, color), state) =>
  _setGameObjectDataArr(
    GameObject.getGameObjectDataArr(state)
    |> ArrayUtils.push({
         transformData: GameObject.Transform.createTransformData(mMatrix),
         geometryData:
           GameObject.Geometry.createGeometryDataWithGeometryPoints(
             vertices,
             indices,
           ),
         materialData:
           GameObject.Material.createMaterialData(shaderName, color),
       }),
    state,
  );