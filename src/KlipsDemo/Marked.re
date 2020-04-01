[@bs.module] external marked : (string, Js.t({..})) => string = "marked";

let componentOrNull = (condition, component) =>
  if (condition) {component} else {ReasonReact.null};

let s = ReasonReact.string;

let ate = ReasonReact.array;

let md = markdownString => {
  let res =
    marked(
      markdownString,
      {"gfm": true, "smartLists": true, "smartypants": true},
    );
  let props =
    ReactDOMRe.props(
      ~dangerouslySetInnerHTML={"__html": res},
      ~className="markdown-container",
      (),
    );
  ReactDOMRe.createElement("section", ~props, [||]);
};