open DataType;

let createTriangleGeometryData = GameObject.Geometry.createTriangleGeometryData;

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, color), state) =>
  GameObject.setGameObjectDataArr(
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