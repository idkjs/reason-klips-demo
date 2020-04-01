'use strict';

var React = require("react");

function text(str) {
  return str;
}

function KlipseDemo(Props) {
  return React.createElement("div", undefined, React.createElement("h1", {
                  id: "ordinary-variants---brief-recap"
                }, "Ordinary Variants - brief recap"), React.createElement("p", undefined, "And now, we are going to ", React.createElement("strong", undefined, "klipsify"), " this code snippet:"), React.createElement("p", undefined, "And now, we are going to ", React.createElement("strong", undefined, "klipsify"), " this code snippet:"), React.createElement("pre", undefined, React.createElement("code", {
                      className: "language-klipse-reason"
                    }, "let hello (name) = \"Hello \" ++ name ++ \"!\";\n    let a = hello(\"World\");")), React.createElement("p", undefined, "And now, we are going to ", React.createElement("strong", undefined, "transpile-reason-to-ocaml"), ":"), React.createElement("pre", undefined, React.createElement("code", {
                      className: "language-transpile-reason-to-ocaml"
                    }, "let hello (name) = \"Hello \" ++ name ++ \"!\";\n    let a = hello(\"OCaml\");")));
}

var make = KlipseDemo;

exports.text = text;
exports.make = make;
/* react Not a pure module */
