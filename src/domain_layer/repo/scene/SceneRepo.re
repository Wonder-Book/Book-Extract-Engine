open ScenePOType;

let _getTriangles = ({triangles}) => triangles;

let getAllTriangles = () => {
  _getTriangles(Repo.getScene()) |> List.map(TriangleSceneRepo.build);
};

let addTriangle = (position, (vertices, indices), (shader, colors)) => {
  Repo.setScene({
    ...Repo.getScene(),
    triangles: [
      TriangleSceneRepo.create(
        TransformSceneRepo.create(position),
        GeometrySceneRepo.create(vertices, indices),
        MaterialSceneRepo.create(shader, colors),
      ),
      ..._getTriangles(Repo.getScene()),
    ],
  });
};

let _getCamera = ({camera}) => camera;

let getCamera = () => {
  _getCamera(Repo.getScene())
  |> OptionContainerDoService.map(CameraSceneRepo.build);
};

let setCamera = ((eye, center, up), (near, far, fovy, aspect)) => {
  Repo.setScene({
    ...Repo.getScene(),
    camera:
      Some(
        CameraSceneRepo.create(
          (eye, center, up),
          (near, far, fovy, aspect),
        ),
      ),
  });
};

// TODO optimize
let setVBO = (vbo, targetTriangleIndex) => {
  Repo.setScene({
    ...Repo.getScene(),
    triangles:
      _getTriangles(Repo.getScene())
      |> List.mapi((triangleIndex, triangle) => {
           triangleIndex === targetTriangleIndex
             ? {
               TriangleSceneRepo.setVBO(vbo, triangle);
             }
             : triangle
         }),
  });
};