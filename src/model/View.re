open DataType;

let createViewData = () => {canvas: None};

let unsafeGetCanvas = state => state.viewData.canvas |> Option.unsafeGet;