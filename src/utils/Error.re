let raiseError = msg => Js.Exn.raiseError(msg) |> ignore;

let throwError: Js.Exn.t => unit = [%raw err => {|
throw err;
|}];