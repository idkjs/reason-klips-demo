'use strict';


var reasonReactBlue = "#48a9dc";

var style = "\n.CodeMirror {\n    padding: 10px; \n    border: none !important;\n}\n\n/* Modify the console title i.e. the bit that says \'Output:\') */\n.CodeMirror:last-child::before {\n  content: \"Output:\";\n  display: block;\n  margin: -10px;\n  padding: 15px 10px 5px 10px;\n  background-color: #272822;\n  color: #aaaaaa;\n  font-family: Montserrat, Arial, sans-serif;\n  font-style: italic; \n}\n\n/* Modify the console area (i.e. the area beneath \'Output:\') */\n.CodeMirror:last-child {\n  background-color: #272822;\n  border: 1px solid #2196f3 !important;\n}\n\n\n/*************** STANDARD CODEMIRROR RULES *********************\n/* \n/* Create your own or copy and paste the ones available at \n/* http://farhadg.github.io/code-mirror-themes/)\n*/\n.cm-s-default {\n	font-size: 1em;\n	line-height: 1.5em;\n	font-family: inconsolata, monospace;\n	letter-spacing: 0.3px;\n	word-spacing: 1px;\n	background: #272822;\n	color: #F8F8F2;\n}\n.cm-s-default .CodeMirror-lines {\n	padding: 8px 0;\n}\n.cm-s-default .CodeMirror-gutters {\n	box-shadow: 1px 0 2px 0 rgba(0, 0, 0, 0.5);\n	-webkit-box-shadow: 1px 0 2px 0 rgba(0, 0, 0, 0.5);\n	background-color: #272822;\n	padding-right: 10px;\n	z-index: 3;\n	border: none;\n}\n.cm-s-default div.CodeMirror-cursor {\n	border-left: 3px solid #F8F8F2;\n}\n.cm-s-default .CodeMirror-activeline-background {\n	background: #3E3D32;\n}\n.cm-s-default .CodeMirror-selected {\n	background-color: #49483E !important;\n    z-index: 9999 !important;\n}\n.cm-s-default .cm-comment {\n	color: #75715E;\n}\n.cm-s-default .cm-string {\n	color: #E6DB74;\n}\n.cm-s-default .cm-number {\n	color: #66D9EF;\n}\n.cm-s-default .cm-atom {\n	color: #66D9EF;\n}\n.cm-s-default .cm-keyword {\n	color: #F92672;\n}\n.cm-s-default .cm-variable {\n	color: #A6E22E;\n}\n.cm-s-default .cm-def {\n	font-style: italic;\n	color: #FD971F;\n}\n.cm-s-default .cm-variable-2 {\n	color: #F92672;\n}\n.cm-s-default .cm-property {\n	color: #66D9EF;\n}\n.cm-s-default .cm-operator {\n	color: #F92672;\n}\n.cm-s-default .CodeMirror-linenumber {\n	color: #75715E;\n}\n";

exports.reasonReactBlue = reasonReactBlue;
exports.style = style;
/* No side effect */
