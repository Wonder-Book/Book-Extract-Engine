open DataType;

let createCameraData = () => {vMatrix: None, pMatrix: None};

let unsafeGetVMatrix = state => state.cameraData.vMatrix |> Option.unsafeGet;

let unsafeGetPMatrix = state => state.cameraData.pMatrix |> Option.unsafeGet;