let init = (): ResultContainerVO.t(unit, Js.Exn.t) => {
  ContextContextEntity.getGl()
  |> ResultContainerVO.bind(gl => {
       BuildInitShaderDataInitShaderDoService.build()
       |> ResultContainerVO.tryCatch(initShaderData => {
            initShaderData
            |> List.iter(
                 (
                   {shaderId, vs, fs}: InitShaderInitShaderVO.singleInitShader,
                 ) => {
                 let program = ContextContextEntity.createProgram(gl);

                 ContextContextEntity.setProgram(shaderId, program);

                 ContextContextEntity.initShader(vs, fs, program, gl)
                 |> ignore;

                 //用于运行测试
                 Js.log((shaderId, vs, fs));
               })
          })
     });
};