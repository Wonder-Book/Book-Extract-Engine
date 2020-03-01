type shaderId = string;

type shaderManager = {
  glsls: list((shaderId, (string, string))),
  programMap: ImmutableHashMap.t2(shaderId, WebGL1.program),
};