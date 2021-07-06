[@bs.module] external marked: (string, Js.t({..})) => string = "marked";

let componentOrNull = (condition, component) =>
  if (condition) {component} else {React.null};

let s = React.string;

let ate = React.array;

let md = markdownString => {
  let res =
    marked(
      markdownString,
      {"gfm": true, "smartLists": true, "smartypants": true},
    );
  let props =
    ReactDOM.domProps(
      ~dangerouslySetInnerHTML={"__html": res},
      ~className="markdown-container",
      (),
    );
  ReactDOM.stringToComponent("section", props);
};
