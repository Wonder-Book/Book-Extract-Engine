open ScenePOType;

let _getTriangles = ({triangles}) => triangles;

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