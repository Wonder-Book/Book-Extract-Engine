open DataType;

let getAllGameObjectData = state => state.sceneData.gameObjects;

let setAllGameObjectData = (allGameObjectData, state) => {
  ...state,
  sceneData: {
    gameObjects: allGameObjectData,
  },
};

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, colors), state) =>
  setAllGameObjectData(
    getAllGameObjectData(state)
    @ [
      {
        transformData: GameObject.Transform.createTransformData(mMatrix),
        geometryData:
          GameObject.Geometry.createVertexDataWithGeometryPoints(
            vertices,
            indices,
          ),
        materialData:
          GameObject.Material.createMaterialData(shaderName, colors),
      },
    ],
    state,
  );

let createSceneData = () => {gameObjects: []};