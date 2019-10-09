open DataType;

let setCameraData = ((vMatrix, pMatrix), state) => {
  ...state,
  cameraData: {
    vMatrix: Some(vMatrix),
    pMatrix: Some(pMatrix),
  },
};