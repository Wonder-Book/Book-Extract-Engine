open ShaderManagerPOType;

let _getGLSLs = ({glsls}) => glsls;

let addGLSL = shader => {
  Repo.setShaderManager({
    ...Repo.getShaderManager(),
    glsls: [
      (
        ShaderShaderEntity.getShaderName(shader),
        shader |> ShaderShaderEntity.getGLSL |> GLSLShaderVO.value,
      ),
      ..._getGLSLs(Repo.getShaderManager()),
    ],
  });
};