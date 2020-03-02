open ShaderManagerPOType;

let _getGLSLs = ({glsls}) => glsls;

let addGLSL = (shader, glsl) => {
  Repo.setShaderManager({
    ...Repo.getShaderManager(),
    glsls: [
      (ShaderShaderEntity.getId(shader), GLSLShaderVO.value(glsl)),
      ..._getGLSLs(Repo.getShaderManager()),
    ],
  });
};

let getAllGLSL = () => {
  Repo.getShaderManager().glsls
  |> List.map(((shaderId, (vs, fs))) => {
       (ShaderShaderEntity.create(shaderId), GLSLShaderVO.create((vs, fs)))
     });
};

let _getProgramMap = ({programMap}) => programMap;

let getProgram = shader => {
  _getProgramMap(Repo.getShaderManager())
  |> ImmutableHashMap.get(ShaderShaderEntity.getId(shader));
};

let setProgram = (shaderId, program) => {
  Repo.setShaderManager({
    ...Repo.getShaderManager(),
    programMap:
      _getProgramMap(Repo.getShaderManager())
      |> ImmutableHashMap.set(shaderId, program),
  });
};