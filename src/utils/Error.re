let error = msg => Js.Exn.raiseError(msg) |> ignore;

let throw: Js.Exn.t => unit = [%raw err => {|
throw err;
|}];