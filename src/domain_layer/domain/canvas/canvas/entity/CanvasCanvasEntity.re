//定义实体Canvas的数据，即“画布”的类型
type t = DomExtend.htmlElement;

let setCanvasById = canvasId =>
  //使用仓库将do转成po，写到po container中
  Repo.setCanvas(
    DomExtend.querySelector(DomExtend.document, {j|#$canvasId|j}),
  );