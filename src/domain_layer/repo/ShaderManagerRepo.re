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