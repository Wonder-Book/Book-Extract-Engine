open DataType;

module GLSL = {
  let createGLSLData = () => {glslMap: ImmutableHashMap.createEmpty()};

  let _getGLSLMap = state => state.glslData.glslMap;

  let _setGLSLMap = (glslMap, state) => {
    ...state,
    glslData: {
      ...state.glslData,
      glslMap,
    },
  };

  let addGLSL = (shaderName, glslData, state) =>
    _setGLSLMap(
      _getGLSLMap(state) |> ImmutableHashMap.set(shaderName, glslData),
      state,
    );

  let getAllValidGLSLEntries = state =>
    _getGLSLMap(state) |> ImmutableHashMap.getValidEntries;
};

module Program = {
  let createProgramData = () => {programMap: ImmutableHashMap.createEmpty()};

  let createProgram = gl => gl |> Gl.createProgram;

  let _getProgramMap = state => state.programData.programMap;

  let _setProgramMap = (programMap, state) => {
    ...state,
    programData: {
      ...state.programData,
      programMap,
    },
  };

  let unsafeGetProgram = (shaderName, state) =>
    _getProgramMap(state) |> ImmutableHashMap.unsafeGet(shaderName);

  let setProgram = (shaderName, program, state) =>
    _setProgramMap(
      _getProgramMap(state) |> ImmutableHashMap.set(shaderName, program),
      state,
    );
};


let _compileShader = (gl, glslSource: string, shader) => {
  Gl.shaderSource(shader, glslSource, gl);
  Gl.compileShader(shader, gl);

  /* TODO optimize */
  Gl.getShaderParameter(shader, Gl.getCompileStatus(gl), gl) === false ?
    {
      let message = Gl.getShaderInfoLog(shader, gl);

      Error.error(
        {j|shader info log: $message
        glsl source: $glslSource
        |j},
      );
    } :
    ();

  shader;
};

let _linkProgram = (program, gl) => {
  Gl.linkProgram(program, gl);

  /* TODO optimize */
  Gl.getProgramParameter(program, Gl.getLinkStatus(gl), gl) === false ?
    {
      let message = Gl.getProgramInfoLog(program, gl);

      Error.error({j|link program error: $message|j});
    } :
    ();
};

let _initShader = (vsSource: string, fsSource: string, gl, program) => {
  let vs =
    _compileShader(
      gl,
      vsSource,
      Gl.createShader(Gl.getVertexShader(gl), gl),
    );
  let fs =
    _compileShader(
      gl,
      fsSource,
      Gl.createShader(Gl.getFragmentShader(gl), gl),
    );

  Gl.attachShader(program, vs, gl);
  Gl.attachShader(program, fs, gl);

  /*!
    if warn:"Attribute 0 is disabled. This has significant performance penalty" when run,
    then do this before linkProgram:
    gl.bindAttribLocation( this.glProgram, 0, "a_position");



    can reference here:
    http://stackoverflow.com/questions/20305231/webgl-warning-attribute-0-is-disabled-this-has-significant-performance-penalt?answertab=votes#tab-top


    OpenGL requires attribute zero to be enabled otherwise it will not render anything.
    On the other hand OpenGL ES 2.0 on which WebGL is based does not. So, to emulate OpenGL ES 2.0 on top of OpenGL if you don't enable attribute 0 the browser has to make a buffer for you large enough for the number of vertices you've requested to be drawn, fill it with the correct value (see gl.vertexAttrib),
    attach it to attribute zero, and enable it.

    It does all this behind the scenes but it's important for you to know that it takes time to create and fill that buffer. There are optimizations the browser can make but in the general case,
    if you were to assume you were running on OpenGL ES 2.0 and used attribute zero as a constant like you are supposed to be able to do, without the warning you'd have no idea of the work the browser is doing on your behalf to emulate that feature of OpenGL ES 2.0 that is different from OpenGL.

    require your particular case the warning doesn't have much meaning. It looks like you are only drawing a single point. But it would not be easy for the browser to figure that out so it just warns you anytime you draw and attribute 0 is not enabled.
    */
  /*!
    Always have vertex attrib 0 array enabled. If you draw with vertex attrib 0 array disabled, you will force the browser to do complicated emulation when running on desktop OpenGL (e.g. on Mac OSX). This is because in desktop OpenGL, nothing gets drawn if vertex attrib 0 is not array-enabled. You can use bindAttribLocation() to force a vertex attribute to use location 0, and use enableVertexAttribArray() to make it array-enabled.
    */
  Gl.bindAttribLocation(program, 0, "a_position", gl);

  _linkProgram(program, gl);

  /*!
    should detach and delete shaders after linking the program

    explain:
    The shader object, due to being attached to the program object, will continue to exist even if you delete the shader object. It will only be deleted by the system when it is no longer attached to any program object (and when the user has asked to delete it, of course).

    "Deleting" the shader, as with all OpenGL objects, merely sets a flag that says you don't need it any more. OpenGL will keep it around for as long as it needs it itself, and will do the actual delete any time later (most likely, but not necessarily, after the program is deleted).
    */
  Gl.deleteShader(vs, gl);
  Gl.deleteShader(fs, gl);

  program;
};

let init = state => {
  let gl = DeviceManager.unsafeGetGl(state);

  GLSL.getAllValidGLSLEntries(state)
  |> ArrayUtils.reduceOneParam(
       (. state, (shaderName, (vs, fs))) =>
         Program.setProgram(
           shaderName,
           gl |> Program.createProgram |> _initShader(vs, fs, gl),
           state,
         ),
       state,
     );
};