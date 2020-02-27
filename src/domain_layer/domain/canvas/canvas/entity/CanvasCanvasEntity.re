//定义实体Canvas的数据->“画布”的类型
type t = DomExtend.htmlElement;

let setCanvasById = canvasId =>
  //依赖主仓库：将do转成main po，写到po container中
  MainRepo.setCanvas(
    DomExtend.querySelector(DomExtend.document, {j|#$canvasId|j}),
  );