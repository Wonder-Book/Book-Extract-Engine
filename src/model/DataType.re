type deviceManagerData = {
  gl: option(Gl.webgl1Context),
  clearColor: Color.Color4.t,
};

type glslData = {
  glslMap: ImmutableHashMap.t2(ShaderName.t, (GLSLWT.VS.t, GLSLWT.FS.t)),
};

type programData = {
  programMap: ImmutableHashMap.t2(ShaderName.t, Gl.program),
};

type geometryData = {
  vertices: GeometryPoints.Vertices.t,
  indices: GeometryPoints.Indices.t,
  vertexBuffer: option(VBO.VertexBuffer.t),
  indexBuffer: option(VBO.IndexBuffer.t),
};

type transformData = {mMatrix: CoordinateTransformationMatrix.Model.t};

type materialData = {
  shaderName: ShaderName.t,
  colors: list(Color.Color3.t),
};

type singleGameObjectData = {
  transformData,
  geometryData,
  materialData,
};

type gameObjectData = list(singleGameObjectData);

type cameraData = {
  vMatrix: option(CoordinateTransformationMatrix.View.t),
  pMatrix: option(CoordinateTransformationMatrix.Projection.t),
};

type canvas = DomExtend.htmlElement;

type viewData = {canvas: option(canvas)};

type state = {
  viewData,
  deviceManagerData,
  glslData,
  programData,
  cameraData,
  gameObjectData,
};

type stateData = {mutable state: option(state)};