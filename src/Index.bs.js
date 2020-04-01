'use strict';

var React = require("react");
var ReactDOMRe = require("reason-react/src/ReactDOMRe.js");
var KlipseDemo$ReasonReactExamples = require("./KlipsDemo/KlipseDemo.bs.js");

ReactDOMRe.renderToElementWithId(React.createElement(KlipseDemo$ReasonReactExamples.make, { }), "root");

/*  Not a pure module */
