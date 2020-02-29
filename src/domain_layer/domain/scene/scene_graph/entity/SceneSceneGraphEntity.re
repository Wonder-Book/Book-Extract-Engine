type t = {
  triangles: list(TriangleSceneGraphVO.t),
  camera: option(CameraSceneGraphVO.t),
};

let addTriangle = (position, (vertices, indices), (shader, colors)) => {
  SceneRepo.addTriangle(position, (vertices, indices), (shader, colors));
};

let setCamera = ((eye, center, up), (near, far, fovy, aspect)) => {
  SceneRepo.setCamera((eye, center, up), (near, far, fovy, aspect));
};