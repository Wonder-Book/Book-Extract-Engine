open DataType;

let createData = () => {gl: None, clearColor: (0., 0., 0., 1.)};

let setGl = (gl, state) => {
  ...state,
  deviceManagerData: {
    ...state.deviceManagerData,
    gl: Some(gl),
  },
};

let unsafeGetGl = state => state.deviceManagerData.gl |> Option.unsafeGet;

let getClearColor = state => state.deviceManagerData.clearColor;

let clearColor = (gl, state) => {
  let (r, g, b, a) = getClearColor(state);

  Gl.clearColor(r, g, b, a, gl);

  state;
};

let initGlState = gl => {
  Gl.enable(Gl.getDepthTest(gl), gl);

  Gl.enable(Gl.getCullFace(gl), gl);
  Gl.cullFace(Gl.getBack(gl), gl);
};