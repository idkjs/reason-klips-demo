'use strict';

var React = require("react");
var ReactDom = require("react-dom");
var KlipseDemo$ReasonKlipsDemo = require("./KlipsDemo/KlipseDemo.bs.js");

var root = document.querySelector("#root");

if (root == null) {
  console.log("Coudn't find #root element to mount the React app.");
} else {
  ReactDom.render(React.createElement(KlipseDemo$ReasonKlipsDemo.make, {}), root);
}

/* root Not a pure module */
