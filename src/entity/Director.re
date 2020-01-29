let initAll = (contextParam, state) =>
  state
  |> DeviceManager.setGl(
       Gl.getWebgl1Context(View.unsafeGetCanvasByThrow(state), contextParam),
     )
  |> Shader.init;

let loopBody = state => {
  let gl = DeviceManager.unsafeGetGlByThrow(state);

  DeviceManager.clearColor(gl, state);

  Gl.clear(Gl.getColorBufferBit(gl) lor Gl.getDepthBufferBit(gl), gl);

  Render.render(gl, state);
};