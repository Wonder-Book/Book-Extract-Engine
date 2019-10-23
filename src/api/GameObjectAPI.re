open DataType;

let createTriangleGeometryData = GameObject.Geometry.createTriangleGeometryData;

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, colors), state) =>
  GameObject.setGameObjectDataArr(
    GameObject.getGameObjectDataArr(state)
    |> ArrayWT.push({
         transformData: GameObject.Transform.createTransformData(mMatrix),
         geometryData:
           GameObject.Geometry.createGeometryDataWithGeometryPoints(
             vertices,
             indices,
           ),
         materialData:
           GameObject.Material.createMaterialData(shaderName, colors),
       }),
    state,
  );