let _createCameraData = canvas => {
  let vMatrix =
    Matrix.setLookAt((0., 0.0, 5.), (0., 0., (-100.)), (0., 1., 0.));

  let pMatrix =
    Matrix.createIdentityMatrix4()
    |> Matrix.buildPerspective((
         30.,
         (canvas##width |> Js.Int.toFloat)
         /. (canvas##height |> Js.Int.toFloat),
         1.,
         100.,
       ));

  (vMatrix, pMatrix);
};

let main = () => {
  let state = Data.createState() |> View.setCanvasById("webgl");

  let canvas = View.unsafeGetCanvas(state);

  state
  |> DeviceManager.setClearColor((0., 0., 0., 1.))
  |> Shader.GLSL.addGLSL("shader1", (GLSL.vs1, GLSL.fs1))
  |> Shader.GLSL.addGLSL("shader2", (GLSL.vs2, GLSL.fs2))
  |> GameObject.addGameObjectData(
       Matrix.createIdentityMatrix4() |> Matrix.setTranslation((0.75, 0., 0.)),
       GameObject.Geometry.createTriangleGeometryData(),
       ("shader1", (1., 0., 0.)),
     )
  |> GameObject.addGameObjectData(
       Matrix.createIdentityMatrix4() |> Matrix.setTranslation((0., 0., 0.5)),
       GameObject.Geometry.createTriangleGeometryData(),
       ("shader2", (0., 1., 0.)),
     )
  |> GameObject.addGameObjectData(
       Matrix.createIdentityMatrix4()
       |> Matrix.setTranslation(((-0.5), 0., (-2.))),
       GameObject.Geometry.createTriangleGeometryData(),
       ("shader1", (0., 0., 1.)),
     )
  |> Camera.setCameraData(_createCameraData(canvas))
  |> Director.init(
       {
         "alpha": true,
         "depth": true,
         "stencil": false,
         "antialias": true,
         "premultipliedAlpha": true,
         "preserveDrawingBuffer": false,
       }: GlType.contextConfigJsObj,
     )
  |> Director.loop;
};