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