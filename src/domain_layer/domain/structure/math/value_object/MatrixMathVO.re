open Js.Typed_array;

type t =
  | Matrix(Float32Array.t);

let createWithoutCheck = resultFloat32Arr => Matrix(resultFloat32Arr);

let createIdentityMatrix = () =>
  Float32Array.make([|
    1.,
    0.,
    0.,
    0.,
    0.,
    1.,
    0.,
    0.,
    0.,
    0.,
    1.,
    0.,
    0.,
    0.,
    0.,
    1.,
  |])
  |> createWithoutCheck;

let value = mat =>
  switch (mat) {
  | Matrix(value) => value
  };

let _getEpsilon = () => 0.000001;

let setLookAt = (eye, center, up, mat) => {
  let eye = eye |> EyeSceneGraphVO.value;
  let (eyeX, eyeY, eyeZ) = eye |> VectorMathVO.value;
  let center = center |> CenterSceneGraphVO.value;
  let (centerX, centerY, centerZ) = center |> VectorMathVO.value;
  let up = up |> UpSceneGraphVO.value;
  let (upX, upY, upZ) = up |> VectorMathVO.value;

  Js.Math.abs_float(eyeX -. centerX) < _getEpsilon()
  && Js.Math.abs_float(eyeY -. centerY) < _getEpsilon()
  && Js.Math.abs_float(eyeZ -. centerZ) < _getEpsilon()
    ? mat
    : {
      let z = VectorMathVO.sub(eye, center) |> VectorMathVO.normalize;

      let x = VectorMathVO.cross(up, z) |> VectorMathVO.normalize;

      let y = VectorMathVO.cross(z, x) |> VectorMathVO.normalize;

      let (x1, x2, x3) = VectorMathVO.value(x);
      let (y1, y2, y3) = VectorMathVO.value(y);
      let (z1, z2, z3) = VectorMathVO.value(z);

      let resultFloat32Arr = value(mat);

      Float32Array.unsafe_set(resultFloat32Arr, 0, x1);
      Float32Array.unsafe_set(resultFloat32Arr, 1, y1);
      Float32Array.unsafe_set(resultFloat32Arr, 2, z1);
      Float32Array.unsafe_set(resultFloat32Arr, 3, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 4, x2);
      Float32Array.unsafe_set(resultFloat32Arr, 5, y2);
      Float32Array.unsafe_set(resultFloat32Arr, 6, z2);
      Float32Array.unsafe_set(resultFloat32Arr, 7, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 8, x3);
      Float32Array.unsafe_set(resultFloat32Arr, 9, y3);
      Float32Array.unsafe_set(resultFloat32Arr, 10, z3);
      Float32Array.unsafe_set(resultFloat32Arr, 11, 0.);
      Float32Array.unsafe_set(
        resultFloat32Arr,
        12,
        -. VectorMathVO.dot(x, eye),
      );
      Float32Array.unsafe_set(
        resultFloat32Arr,
        13,
        -. VectorMathVO.dot(y, eye),
      );
      Float32Array.unsafe_set(
        resultFloat32Arr,
        14,
        -. VectorMathVO.dot(z, eye),
      );
      Float32Array.unsafe_set(resultFloat32Arr, 15, 1.);

      resultFloat32Arr |> createWithoutCheck;
    };
};

let buildPerspective = ((fovy, aspect, near, far), mat) => {
  let fovy = FovySceneGraphVO.value(fovy);

  Js.Math.sin(Js.Math._PI *. fovy /. 180. /. 2.) === 0.
    ? ResultContainerVO.failWith("frustum should not be null")
    : {
      let aspect = AspectSceneGraphVO.value(aspect);
      let near = NearSceneGraphVO.value(near);
      let far = FarSceneGraphVO.value(far);

      let fovy = Js.Math._PI *. fovy /. 180. /. 2.;
      let s = Js.Math.sin(fovy);
      let rd = 1. /. (far -. near);
      let ct = Js.Math.cos(fovy) /. s;

      let resultFloat32Arr = value(mat);

      Float32Array.unsafe_set(resultFloat32Arr, 0, ct /. aspect);
      Float32Array.unsafe_set(resultFloat32Arr, 1, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 2, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 3, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 4, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 5, ct);
      Float32Array.unsafe_set(resultFloat32Arr, 6, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 7, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 8, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 9, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 10, -. (far +. near) *. rd);
      Float32Array.unsafe_set(resultFloat32Arr, 11, -1.);
      Float32Array.unsafe_set(resultFloat32Arr, 12, 0.);
      Float32Array.unsafe_set(resultFloat32Arr, 13, 0.);
      Float32Array.unsafe_set(
        resultFloat32Arr,
        14,
        (-2.) *. far *. near *. rd,
      );
      Float32Array.unsafe_set(resultFloat32Arr, 15, 0.);

      resultFloat32Arr |> createWithoutCheck |> ResultContainerVO.succeed;
    };
};

let setTranslation = (v, mat) => {
  let resultFloat32Arr = value(mat);
  let (x, y, z) = VectorMathVO.value(v);

  Float32Array.unsafe_set(resultFloat32Arr, 12, x);
  Float32Array.unsafe_set(resultFloat32Arr, 13, y);
  Float32Array.unsafe_set(resultFloat32Arr, 14, z);

  resultFloat32Arr |> createWithoutCheck;
};