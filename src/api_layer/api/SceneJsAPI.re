let createTriangleVertexData = SceneApService.createTriangleVertexData;

let addTriangle = (position, (vertices, indices), (shaderName, colors)) => {
  //这里的DTO与VO有区别：VO的colors是array，而DTO的colors是list。需要将colors的array转换为list
  SceneApService.addTriangle(
    position,
    (vertices, indices),
    (shaderName, colors |> Array.to_list),
  );
};

let setCamera = SceneApService.setCamera;