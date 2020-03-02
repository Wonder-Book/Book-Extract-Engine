type t = WebGL1.webgl1Context;

let setClearColor = clearColor => {
  ContextRepo.setClearColor(clearColor);
};

let getGl = () => {
  ContextRepo.getGl();
};

let setGl = (contextConfigJsObj, canvas) => {
  ContextRepo.setGl(WebGL1.getWebGL1Context(canvas, contextConfigJsObj));
};

let createProgram = gl => gl |> WebGL1.createProgram;

let useProgram = (program, gl) => WebGL1.useProgram(program, gl);

let setProgram = (shaderId, program) => {
  ShaderManagerRepo.setProgram(shaderId, program);
};

let _compileShader = (gl, glslSource, shader) => {
  WebGL1.shaderSource(shader, glslSource, gl);
  WebGL1.compileShader(shader, gl);

  /* TODO optimize */
  WebGL1.getShaderParameter(shader, WebGL1.getCompileStatus(gl), gl)
  === false
    ? {
      let message = WebGL1.getShaderInfoLog(shader, gl);

      Error.error(
        {j|shader info log: $message
        glsl source: $glslSource
        |j},
      );
    }
    : shader;
};

let _linkProgram = (program, gl) => {
  WebGL1.linkProgram(program, gl);

  /* TODO optimize */
  WebGL1.getProgramParameter(program, WebGL1.getLinkStatus(gl), gl) === false
    ? {
      let message = WebGL1.getProgramInfoLog(program, gl);

      Error.error({j|link program error: $message|j});
    }
    : program;
};

let initShader = (vsSource: string, fsSource: string, program, gl) => {
  let vs =
    _compileShader(
      gl,
      vsSource,
      WebGL1.createShader(WebGL1.getVertexShader(gl), gl),
    );
  let fs =
    _compileShader(
      gl,
      fsSource,
      WebGL1.createShader(WebGL1.getFragmentShader(gl), gl),
    );

  WebGL1.attachShader(program, vs, gl);
  WebGL1.attachShader(program, fs, gl);

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
  WebGL1.bindAttribLocation(program, 0, "a_position", gl);

  _linkProgram(program, gl);

  /*!
    should detach and delete shaders after linking the program

    explain:
    The shader object, due to being attached to the program object, will continue to exist even if you delete the shader object. It will only be deleted by the system when it is no longer attached to any program object (and when the user has asked to delete it, of course).

    "Deleting" the shader, as with all OpenGL objects, merely sets a flag that says you don't need it any more. OpenGL will keep it around for as long as it needs it itself, and will do the actual delete any time later (most likely, but not necessarily, after the program is deleted).
    */
  WebGL1.deleteShader(vs, gl);
  WebGL1.deleteShader(fs, gl);

  program;
};

let clearColor = gl => {
  let (r, g, b, a) = ContextRepo.getClearColor();

  WebGL1.clearColor(r, g, b, a, gl);
};

let clearCanvas = gl => {
  WebGL1.clear(
    WebGL1.getColorBufferBit(gl) lor WebGL1.getDepthBufferBit(gl),
    gl,
  );
};

let enableDepthTest = gl => gl |> WebGL1.enable(WebGL1.getDepthTest(gl));

let enableBackCullFace = gl => {
  WebGL1.enable(WebGL1.getCullFace(gl), gl);
  WebGL1.cullFace(WebGL1.getBack(gl), gl);
};

let getAttribLocation = (program, name, gl) =>
  WebGL1.getAttribLocation(program, name, gl);

let getUniformLocation = (program, name, gl) =>
  WebGL1.getUniformLocation(program, name, gl);

let unsafeGetUniformLocation = (program, name, gl) =>
  getUniformLocation(program, name, gl) |> Js.Null.getExn;

let bindBuffer = (bufferTarget, buffer, gl) =>
  WebGL1.bindBuffer(bufferTarget, buffer, gl);

let vertexAttribPointer =
    (~gl, ~size, ~location, ~type_=WebGL1.getFloat(gl), ()) =>
  WebGL1.vertexAttribPointer(location, size, type_, false, 0, 0, gl);

let enableVertexAttribArray = (location, gl) =>
  WebGL1.enableVertexAttribArray(location, gl);

let getArrayBuffer = gl => gl |> WebGL1.getArrayBuffer;

let getElementArrayBuffer = gl => gl |> WebGL1.getElementArrayBuffer;

let uniform3f = (location, x, y, z, gl) =>
  WebGL1.uniform3f(location, x, y, z, gl);

let uniformMatrix4fv = (~gl, ~location, ~value, ~transpose=false, ()) =>
  WebGL1.uniformMatrix4fv(location, transpose, value, gl);

let drawElements =
    (
      ~gl,
      ~count,
      ~mode=WebGL1.getTriangles(gl),
      ~type_=WebGL1.getUnsignedShort(gl),
      ~offset=0,
      (),
    ) =>
  WebGL1.drawElements(mode, count, type_, offset, gl);