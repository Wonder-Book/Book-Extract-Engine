open DataType;

let unsafeGetCanvas = View.unsafeGetCanvas;

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