module Model = {
  type t =
    | Model(Matrix.t);

  let create = mat => Model(mat);

  let value = vMat =>
    switch (vMat) {
    | Model(mat) => mat
    };
};

module View = {
  type t =
    | View(Matrix.t);

  let create = mat => View(mat);

  let value = vMat =>
    switch (vMat) {
    | View(mat) => mat
    };
};

module Projection = {
  type t =
    | Projection(Matrix.t);

  let create = mat => Projection(mat);

  let value = pMat =>
    switch (pMat) {
    | Projection(mat) => mat
    };
};