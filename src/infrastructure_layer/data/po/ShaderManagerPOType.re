type shaderId = string;

type shaderManager = {
  glsls: list((shaderId, (string, string))),
  programMap: ImmutableHashMap.t(shaderId, WebGL1.program),
};