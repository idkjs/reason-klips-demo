'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
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
  return Curry._1("section", {
              className: "markdown-container",
              dangerouslySetInnerHTML: {
                __html: res
              }
            });
}

exports.componentOrNull = componentOrNull;
exports.s = s;
exports.ate = ate;
exports.md = md;
/* marked Not a pure module */
