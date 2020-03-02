let getCanvas = () => {
  let po = ContainerManager.getPO();

  /*
   po.canvas类型为option(DomExtend.htmlElement)，我们要将其转换为DO，有两个方案：
   1、调用OptionContainerDoService.unsafeGet，直接返回canvas的值
   2、调用OptionContainerDoService.get，用Result包装canvas的值

   考虑到：
   我们应该优先使用Result而不是使用抛出异常来处理错误；
   因为Result是领域层的值对象，所以方案2返回的数据属于DO数据，符合“主仓库应该返回DO数据”的设计。

   所以我们使用方案2
   */
  po.canvas |> OptionContainerDoService.get;
};

let setCanvas = canvas => {
  let po = ContainerManager.getPO();

  //do类型为DomExtend.htmlElement，需要将其转换为po的类型option(DomExtend.htmlElement)
  {...po, canvas: Some(canvas)} |> ContainerManager.setPO;
};

let getContext = () => {
  let po = ContainerManager.getPO();

  po.context;
};

let setContext = context => {
  let po = ContainerManager.getPO();

  {...po, context} |> ContainerManager.setPO;
};

let getShaderManager = () => {
  let po = ContainerManager.getPO();

  po.shaderManager;
};

let setShaderManager = shaderManager => {
  let po = ContainerManager.getPO();

  {...po, shaderManager} |> ContainerManager.setPO;
};

let getScene = () => {
  let po = ContainerManager.getPO();

  po.scene;
};

let setScene = scene => {
  let po = ContainerManager.getPO();

  {...po, scene} |> ContainerManager.setPO;
};

let getVBOManager = () => {
  let po = ContainerManager.getPO();

  po.vboManager;
};

let setVBOManager = vboManager => {
  let po = ContainerManager.getPO();

  {...po, vboManager} |> ContainerManager.setPO;
};