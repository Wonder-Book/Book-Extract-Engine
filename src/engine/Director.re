let init = (contextParam, state) =>
  state
  |> DeviceManager.setGl(
       Gl.getWebgl1Context(View.unsafeGetCanvas(state), contextParam),
     )
  |> Shader.init;

let loop = state => {
  let gl = DeviceManager.unsafeGetGl(state);

  DeviceManager.clearColor(gl, state);

  let _loopBody = state => {
    Gl.clear(Gl.getColorBufferBit(gl) lor Gl.getDepthBufferBit(gl), gl);

    DeviceManager.initGlState(gl);

    Render.render(gl, state);
  };

  let rec _loop = state =>
    DomExtend.requestAnimationFrame((time: float) =>
      Data.unsafeGetState() |> _loopBody |> _loop |> ignore
    );

  Data.setState(state) |> _loop |> ignore;
};