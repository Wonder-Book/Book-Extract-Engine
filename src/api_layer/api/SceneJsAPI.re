let createTriangleVertexData = SceneApService.createTriangleVertexData;

let addTriangle = (position, (vertices, indices), (shaderName, colors)) => {
  SceneApService.addTriangle(
    position,
    (vertices, indices),
    (shaderName, colors |> Array.to_list),
  );
};

let setCamera = SceneApService.setCamera;