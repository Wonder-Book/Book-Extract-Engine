let create = (transform, geometry, material): ScenePOType.triangle => {
  transform,
  geometry,
  material,
};

let build =
    ({transform, geometry, material}: ScenePOType.triangle)
    : TriangleSceneGraphVO.t => {
  transform: TransformSceneRepo.build(transform),
  geometry: GeometrySceneRepo.build(geometry),
  material: MaterialSceneRepo.build(material),
};

let setVBO = (vbo, ({geometry}: ScenePOType.triangle) as triangle) => {
  {...triangle, geometry: GeometrySceneRepo.setVBO(vbo, geometry)};
};