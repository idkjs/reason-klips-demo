let text = str => React.string(str);

[@react.component]
let make = () => {
  <div>
    <h1 id="ordinary-variants---brief-recap">
      {React.string("Doesnt work from ReasonReact")}
    </h1>
    <pre>
      <code className="language-transpile-reason-to-ocaml">
        {|let hello (name) = "Hello " ++ name ++ "!";
    let a = hello("OCaml");|}
        ->React.string
      </code>
    </pre>
  </div>;
};