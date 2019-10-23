open DataType;

let setCameraData = ((vMatrix, pMatrix), state) => {
  ...state,
  cameraData: {
    vMatrix: Some(vMatrix |> CoordinateTransformationMatrix.View.create),
    pMatrix:
      Some(pMatrix |> CoordinateTransformationMatrix.Projection.create),
  },
};