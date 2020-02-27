open MainPOType;

let getCanvas = () => {
  let mainPO = ContainerRepo.getMainPO();

  /*
   mainPO.canvas类型为option(DomExtend.htmlElement)
   此处有两个方案：
   1、调用OptionContainerDoService.unsafeGetByThrow，直接返回canvas的值
   2、调用OptionContainerDoService.get，用Result包装canvas的值

   考虑到：
   我们应该优先使用Result而不是使用抛出异常来处理错误；
   因为Result是领域层的值对象，所以方案2返回的数据属于DO数据，符合“主仓库应该返回DO数据”的设计。

   所以我们使用方案2
   */
  mainPO.canvas |> OptionContainerDoService.get;
};

let setCanvas = canvas => {
  let mainPO = ContainerRepo.getMainPO();

  //这里do与main po相同（canvas的类型都为DomExtend.htmlElement），所以不需要转换
  {...mainPO, canvas: Some(canvas)} |> ContainerRepo.setMainPO;
};