let initAll = (contextParam, state) =>
  state
  |> Result.tryCatch(state => {View.unsafeGetCanvasByThrow(state)})
  |> Result.bind(canvas => {
       state
       |> DeviceManager.setGl(Gl.getWebgl1Context(canvas, contextParam))
       |> ShaderManager.init
     });

let loopBody = state => {
  state
  |> Result.tryCatch(state => {DeviceManager.unsafeGetGlByThrow(state)})
  |> Result.bind(gl => {
       DeviceManager.clearColor(gl, state);

       Gl.clear(Gl.getColorBufferBit(gl) lor Gl.getDepthBufferBit(gl), gl);

       Render.render(gl, state);
     });
};