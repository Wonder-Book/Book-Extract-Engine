open DataType;

let createTriangleGeometryData = GameObject.Geometry.createTriangleGeometryData;

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, colors), state) =>
  GameObject.setGameObjectDataArr(
    GameObject.getGameObjectDataArr(state)
    |> ArrayWT.push({
         transformData:
           GameObject.Transform.createTransformData(
             CoordinateTransformationMatrix.Model.create(mMatrix),
           ),
         geometryData:
           GameObject.Geometry.createGeometryDataWithGeometryPoints(
             vertices,
             indices,
           ),
         materialData:
           GameObject.Material.createMaterialData(
             ShaderWT.create(shaderName),
             colors
             |> Js.Array.map(((r, g, b)) => Color.Color3.create(r, g, b)),
           ),
       }),
    state,
  );