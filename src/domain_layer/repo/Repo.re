let getCanvas = () => {
  let po = ContainerManager.getPO();

  po.canvas;
};

let setCanvas = canvas => {
  let po = ContainerManager.getPO();

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