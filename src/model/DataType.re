type deviceManagerData = {
  gl: option(Gl.webgl1Context),
  clearColor: (float, float, float, float),
};

type shaderName = string;

type vs = string;

type fs = string;

type glslData = {glslMap: ImmutableHashMap.t2(shaderName, (vs, fs))};

type programData = {programMap: ImmutableHashMap.t2(shaderName, Gl.program)};

type geometryData = {
  vertices: Js.Typed_array.Float32Array.t,
  indices: Js.Typed_array.Uint16Array.t,
  vertexBuffer: option(Gl.buffer),
  indexBuffer: option(Gl.buffer),
};

type transformData = {mMatrix: MatrixType.matrix};

type materialData = {
  shaderName,
  colors: array((float, float, float)),
};

type gameObjectData = {
  transformData,
  geometryData,
  materialData,
};

type allGameObjectData = {gameObjectDataArr: array(gameObjectData)};

type cameraData = {
  vMatrix: option(MatrixType.matrix),
  pMatrix: option(MatrixType.matrix),
};

type canvas = DomExtend.htmlElement;

type viewData = {canvas: option(canvas)};

type state = {
  viewData,
  deviceManagerData,
  glslData,
  programData,
  cameraData,
  allGameObjectData,
};

type stateData = {mutable state: option(state)};