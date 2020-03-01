let error = msg => Js.Exn.raiseError(msg);

let throwError: Js.Exn.t => unit = [%raw err => {|
throw err;
|}];