let setTranslation = ((v1, v2, v3), mat) =>
  Matrix.setTranslation(Vector.create(v1, v2, v3), mat);

let buildPerspective = ((fovy, aspect, near, far), mat) =>
  Matrix.buildPerspective(
    (
      CameraVO.Frustum.Fovy.create(fovy),
      CameraVO.Frustum.Aspect.create(aspect),
      CameraVO.Frustum.Near.create(near),
      CameraVO.Frustum.Far.create(far),
    ),
    mat,
  )
  |> Result.getSuccessValue(ErrorService.throwError);

let setLookAt =
    ((eyeX, eyeY, eyeZ), (centerX, centerY, centerZ), (upX, upY, upZ), mat) =>
  Matrix.setLookAt(
    Vector.create(eyeX, eyeY, eyeZ),
    Vector.create(centerX, centerY, centerZ),
    Vector.create(upX, upY, upZ),
    mat,
  );

let createIdentityMatrix = Matrix.createIdentityMatrix;