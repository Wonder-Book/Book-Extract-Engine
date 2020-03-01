open POType;

let create = () => {
  canvas: None,
  context: {
    gl: None,
    clearColor: (0., 0., 0., 1.),
  },
  shaderManager: {
    glsls: [],
    programMap: ImmutableHashMap.createEmpty(),
  },
  scene: {
    triangles: [],
    camera: None,
  },
};