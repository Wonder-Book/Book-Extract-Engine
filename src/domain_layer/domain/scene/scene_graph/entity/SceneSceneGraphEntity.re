type t = {triangles: list(TriangleSceneGraphVO.t)};

let addTriangle = (position, (vertices, indices), (shader, colors)) => {
  SceneRepo.addTriangle(position, (vertices, indices), (shader, colors));
};