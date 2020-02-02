open DataType;

let createCameraData = () => {vMatrix: None, pMatrix: None};

let unsafeGetVMatrixByThrow = state => state.cameraData.vMatrix |> OptionService.unsafeGetByThrow;

let unsafeGetPMatrixByThrow = state => state.cameraData.pMatrix |> OptionService.unsafeGetByThrow;

let setCameraData = ((vMatrix, pMatrix), state) => {
  ...state,
  cameraData: {
    vMatrix: Some(vMatrix),
    pMatrix: Some(pMatrix),
  },
};