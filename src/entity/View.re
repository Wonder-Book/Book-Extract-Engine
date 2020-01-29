open DataType;

let createViewData = () => {canvas: None};

let unsafeGetCanvasByThrow = state => state.viewData.canvas |> Option.unsafeGetByThrow;

let _setCanvas = (canvas, state) => {
  ...state,
  viewData: {
    canvas: Some(canvas),
  },
};

let setCanvasById = (canvasId, state) =>
  _setCanvas(
    DomExtend.querySelector(DomExtend.document, {j|#$canvasId|j}),
    state,
  );