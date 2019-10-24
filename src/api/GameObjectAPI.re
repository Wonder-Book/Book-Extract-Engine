open DataType;

let createTriangleGeometryData = GameObject.Geometry.createTriangleGeometryData;

let addGameObjectData =
    (mMatrix, (vertices, indices), (shaderName, colors), state) =>
  GameObject.setGameObjectDataList(
    [
      {
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
            |> Array.to_list
            |> List.map(((r, g, b)) => Color.Color3.create(r, g, b)),
          ),
      },
      ...GameObject.getGameObjectDataList(state),
    ],
    state,
  );