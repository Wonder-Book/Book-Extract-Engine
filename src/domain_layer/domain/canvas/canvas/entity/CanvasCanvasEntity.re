type t = DomExtend.htmlElement;

let getCanvas = () => {
  Repo.getCanvas();
};

let setCanvasById = canvasId =>
  Repo.setCanvas(
    DomExtend.querySelector(DomExtend.document, {j|#$canvasId|j}),
  );