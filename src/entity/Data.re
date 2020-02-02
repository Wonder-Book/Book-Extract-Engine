open DataType;

let stateData = {state: None};

let getStateData = () => stateData;

let unsafeGetStateByThrow = () =>
  getStateData().state |> OptionService.unsafeGetByThrow;

let createState = () => {
  deviceManagerData: DeviceManager.createDeviceManagerData(),
  glslData: Shader.GLSL.createGLSLData(),
  programData: Shader.Program.createProgramData(),
  cameraData: Camera.createCameraData(),
  viewData: View.createViewData(),
  gameObjectData: GameObject.createAllGameObjectData(),
};

let setState = state => {
  getStateData().state = Some(state);

  state;
};