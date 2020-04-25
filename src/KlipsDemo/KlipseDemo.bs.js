'use strict';

var React = require("react");

function text(str) {
  return str;
}

function KlipseDemo(Props) {
  return React.createElement("div", undefined, React.createElement("h1", {
                  id: "ordinary-variants---brief-recap"
                }, "Doesnt work from ReasonReact"), React.createElement("pre", undefined, React.createElement("code", {
                      className: "language-transpile-reason-to-ocaml"
                    }, "let hello (name) = \"Hello \" ++ name ++ \"!\";\n    let a = hello(\"OCaml\");")));
}

var make = KlipseDemo;

exports.text = text;
exports.make = make;
/* react Not a pure module */
