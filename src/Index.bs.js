'use strict';

var React = require("react");
var ReactDOMRe = require("reason-react/src/ReactDOMRe.js");
var KlipseDemo$ReasonKlipsDemo = require("./KlipsDemo/KlipseDemo.bs.js");

ReactDOMRe.renderToElementWithId(React.createElement(KlipseDemo$ReasonKlipsDemo.make, { }), "root");

/*  Not a pure module */
