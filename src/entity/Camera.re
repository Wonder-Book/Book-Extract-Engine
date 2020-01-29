open DataType;

let createCameraData = () => {vMatrix: None, pMatrix: None};

let unsafeGetVMatrixByThrow = state => state.cameraData.vMatrix |> Option.unsafeGetByThrow;

let unsafeGetPMatrixByThrow = state => state.cameraData.pMatrix |> Option.unsafeGetByThrow;

let setCameraData = ((vMatrix, pMatrix), state) => {
  ...state,
  cameraData: {
    vMatrix: Some(vMatrix),
    pMatrix: Some(pMatrix),
  },
};