let reasonReactBlue = "#48a9dc";

// The {j|...|j} feature is just string interpolation, from
// bucklescript.github.io/docs/en/interop-cheatsheet#string-unicode-interpolation
// This allows us to conveniently write CSS, together with variables, by
// constructing a string
let style = {j|
.CodeMirror {
    padding: 10px;
    border: none !important;
}

/* Modify the console title i.e. the bit that says 'Output:') */
.CodeMirror:last-child::before {
  content: "Output:";
  display: block;
  margin: -10px;
  padding: 15px 10px 5px 10px;
  background-color: #272822;
  color: #aaaaaa;
  font-family: Montserrat, Arial, sans-serif;
  font-style: italic;
}

/* Modify the console area (i.e. the area beneath 'Output:') */
.CodeMirror:last-child {
  background-color: #272822;
  border: 1px solid #2196f3 !important;
}


/*************** STANDARD CODEMIRROR RULES *********************
/*
/* Create your own or copy and paste the ones available at
/* http://farhadg.github.io/code-mirror-themes/)
*/
.cm-s-default {
	font-size: 1em;
	line-height: 1.5em;
	font-family: inconsolata, monospace;
	letter-spacing: 0.3px;
	word-spacing: 1px;
	background: #272822;
	color: #F8F8F2;
}
.cm-s-default .CodeMirror-lines {
	padding: 8px 0;
}
.cm-s-default .CodeMirror-gutters {
	box-shadow: 1px 0 2px 0 rgba(0, 0, 0, 0.5);
	-webkit-box-shadow: 1px 0 2px 0 rgba(0, 0, 0, 0.5);
	background-color: #272822;
	padding-right: 10px;
	z-index: 3;
	border: none;
}
.cm-s-default div.CodeMirror-cursor {
	border-left: 3px solid #F8F8F2;
}
.cm-s-default .CodeMirror-activeline-background {
	background: #3E3D32;
}
.cm-s-default .CodeMirror-selected {
	background-color: #49483E !important;
    z-index: 9999 !important;
}
.cm-s-default .cm-comment {
	color: #75715E;
}
.cm-s-default .cm-string {
	color: #E6DB74;
}
.cm-s-default .cm-number {
	color: #66D9EF;
}
.cm-s-default .cm-atom {
	color: #66D9EF;
}
.cm-s-default .cm-keyword {
	color: #F92672;
}
.cm-s-default .cm-variable {
	color: #A6E22E;
}
.cm-s-default .cm-def {
	font-style: italic;
	color: #FD971F;
}
.cm-s-default .cm-variable-2 {
	color: #F92672;
}
.cm-s-default .cm-property {
	color: #66D9EF;
}
.cm-s-default .cm-operator {
	color: #F92672;
}
.cm-s-default .CodeMirror-linenumber {
	color: #75715E;
}
|j};
