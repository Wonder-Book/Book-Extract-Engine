open DataType;

let stateData = {state: None};

let getStateData = () => stateData;

let unsafeGetStateByThrow = () =>
  getStateData().state |> OptionService.unsafeGetByThrow;

let createState = () => {
  deviceManagerData: DeviceManager.createDeviceManagerData(),
  shaderManagerData: ShaderManager.createShaderManagerData(),
  cameraData: Camera.createCameraData(),
  viewData: View.createViewData(),
  sceneData: Scene.createSceneData(),
};

let setState = state => {
  getStateData().state = Some(state);

  state;
};