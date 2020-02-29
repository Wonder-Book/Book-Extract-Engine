let getClearColor = () => {
  Repo.getContext().clearColor;
};

let setClearColor = clearColor => {
  Repo.setContext({
    ...Repo.getContext(),
    clearColor: Color4ContainerVO.value(clearColor),
  });
};