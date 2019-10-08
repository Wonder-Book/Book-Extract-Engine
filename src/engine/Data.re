open DataType;

let stateData = {state: None};

let getStateData = () => stateData;

let unsafeGetState = () =>
  getStateData().state |> Option.unsafeGet;

let createState = () => {
  deviceManagerData: DeviceManager.createData(),
  glslData: Shader.GLSL.createGLSLData(),
  programData: Shader.Program.createProgramData(),
  cameraData: Camera.createCameraData(),
  viewData: View.createViewData(),
  allGameObjectData: GameObject.createAllGameObjectData(),
};

let setState = state => {
  getStateData().state = Some(state);

  state;
};