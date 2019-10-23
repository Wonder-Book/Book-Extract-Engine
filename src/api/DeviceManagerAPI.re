open DataType;

let setClearColor = ((r, g, b, a), state) => {
  ...state,
  deviceManagerData: {
    ...state.deviceManagerData,
    clearColor: Color.Color4.create(r, g, b, a),
  },
};