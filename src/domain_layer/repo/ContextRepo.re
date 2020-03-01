let getClearColor = () => {
  Repo.getContext().clearColor;
};

let setClearColor = clearColor => {
  Repo.setContext({
    ...Repo.getContext(),
    clearColor: Color4ContainerVO.value(clearColor),
  });
};

let getGl = gl => {
  Repo.getContext().gl |> OptionContainerDoService.get;
};

let setGl = gl => {
  Repo.setContext({...Repo.getContext(), gl: Some(gl)});
};