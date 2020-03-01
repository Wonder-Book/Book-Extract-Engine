let init = (): ResultContainerVO.t(unit, Js.Exn.t) => {
  //注意：这里获得ContextContextEntity的DO，而不是直接获得PO中Context的gl字段（虽然两者的类型是一样的）
  ContextContextEntity.getGl()
  |> ResultContainerVO.bind(gl => {
       //从着色器DO数据中构建值对象Init Shader
       BuildInitShaderDataInitShaderDoService.build()
       |> ResultContainerVO.tryCatch(initShaderData => {
            initShaderData
            |> List.iter(
                 (
                   {shaderId, vs, fs}: InitShaderInitShaderVO.singleInitShader,
                 ) => {
                 /* 注意：领域服务不应该直接依赖Repo

                    这里需要操作值对象Init Shader的数据。
                    因为它属于DO，所以通过实体ContextContextEntity来操作它，而不是直接用Repo来操作它！
                    */

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