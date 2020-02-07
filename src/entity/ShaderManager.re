open DataType;

module GLSL = {
  let createGLSLData = () => {glslMap: ImmutableHashMap.createEmpty()};

  let _getGLSLMap = state => state.shaderManagerData.glslData.glslMap;

  let _setGLSLMap = (glslMap, state) => {
    ...state,
    shaderManagerData: {
      ...state.shaderManagerData,
      glslData: {
        ...state.shaderManagerData.glslData,
        glslMap,
      },
    },
  };

  let addGLSL = (shaderName, glslData, state) =>
    _setGLSLMap(
      _getGLSLMap(state) |> Shader.GLSL.addGLSL(shaderName, glslData),
      state,
    );

  let getAllValidGLSLEntries = state =>
    _getGLSLMap(state) |> ImmutableHashMap.getValidEntries;

  let getAllValidGLSLEntryList = state =>
    state |> getAllValidGLSLEntries |> Array.to_list;
};

module Program = {
  let createProgramData = () => {programMap: ImmutableHashMap.createEmpty()};

  let createProgram = gl => gl |> Gl.createProgram;

  let _getProgramMap = state => state.shaderManagerData.programData.programMap;

  let _setProgramMap = (programMap, state) => {
    ...state,
    shaderManagerData: {
      ...state.shaderManagerData,
      programData: {
        ...state.shaderManagerData.programData,
        programMap,
      },
    },
  };

  let unsafeGetProgramByNull = (shaderName, state) =>
    _getProgramMap(state)
    |> Shader.Program.unsafeGetProgramByNull(shaderName);

  let setProgram = (shaderName, program, state) =>
    _setProgramMap(
      _getProgramMap(state) |> Shader.Program.setProgram(shaderName, program),
      state,
    );
};

let _changeGLSLDataListToInitShaderDataList = glslDataList =>
  glslDataList
  |> List.map(((shaderName, (vs, fs))) =>
       (
         {shaderName, vs: GLSLVO.VS.value(vs), fs: GLSLVO.FS.value(fs)}: InitShaderDataType.initShaderData
       )
     );

let init = (state: DataType.state): Result.t(DataType.state, Js.Exn.t) => {
  state
  |> Result.tryCatch(state => {DeviceManager.unsafeGetGlByThrow(state)})
  |> Result.bind(gl => {
       GLSL.getAllValidGLSLEntryList(state)
       |> _changeGLSLDataListToInitShaderDataList
       |> Result.tryCatch(initShaderDataList =>
            initShaderDataList
            |> List.fold_left(
                 (
                   state,
                   {shaderName, vs, fs}: InitShaderDataType.initShaderData,
                 ) =>
                   Program.setProgram(
                     shaderName,
                     gl
                     |> Shader.Program.createProgram
                     |> Shader.initShader(vs, fs, gl),
                     state,
                   ),
                 state,
               )
          )
     });
};

let createShaderManagerData = () => {
  glslData: GLSL.createGLSLData(),
  programData: Program.createProgramData(),
};