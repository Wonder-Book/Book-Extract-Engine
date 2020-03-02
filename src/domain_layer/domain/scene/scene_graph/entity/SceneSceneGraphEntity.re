type t = {
  triangles: list(TriangleSceneGraphVO.t),
  camera: option(CameraSceneGraphVO.t),
};

let getAllTriangles = () => {
  SceneRepo.getAllTriangles();
};

let addTriangle = (position, (vertices, indices), (shader, colors)) => {
  SceneRepo.addTriangle(position, (vertices, indices), (shader, colors));
};

let getCamera = () => {
  SceneRepo.getCamera();
};

let setCamera = ((eye, center, up), (near, far, fovy, aspect)) => {
  SceneRepo.setCamera((eye, center, up), (near, far, fovy, aspect));
};

let setVBO = (vbo, triangleIndex) => {
  SceneRepo.setVBO(vbo, triangleIndex);
};