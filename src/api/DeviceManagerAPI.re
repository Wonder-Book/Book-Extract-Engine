open DataType;

let setClearColor = (clearColor, state) => {
  ...state,
  deviceManagerData: {
    ...state.deviceManagerData,
    clearColor,
  },
};