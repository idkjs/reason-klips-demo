'use strict';

var React = require("react");
var Marked = require("marked");

function componentOrNull(condition, component) {
  if (condition) {
    return component;
  } else {
    return null;
  }
}

function s(prim) {
  return prim;
}

function ate(prim) {
  return prim;
}

function md(markdownString) {
  var res = Marked(markdownString, {
        gfm: true,
        smartLists: true,
        smartypants: true
      });
  var props = {
    className: "markdown-container",
    dangerouslySetInnerHTML: {
      __html: res
    }
  };
  return React.createElement("section", props);
}

exports.componentOrNull = componentOrNull;
exports.s = s;
exports.ate = ate;
exports.md = md;
/* react Not a pure module */
