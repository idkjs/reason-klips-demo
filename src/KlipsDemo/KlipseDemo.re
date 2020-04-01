let text = (str) => React.string(str);

[@react.component]
let make = () => {
    <div>
    <h1 id="ordinary-variants---brief-recap">{React.string("Ordinary Variants - brief recap")}</h1>
    <p>{text("And now, we are going to ")} <strong>{text("klipsify")}</strong>{text(" this code snippet:")}</p>

  // <pre>
  //   <code className="language-klipse-reason">
  //     {text("let hello (name) = "Hello " ++ name ++ "!";
  //     let a = hello("World");")
  //   </code>
  // </pre>
    <p>{text("And now, we are going to ")} <strong>{text("klipsify")}</strong>{text(" this code snippet:")}</p>

  <pre><code className="language-klipse-reason">
    {|let hello (name) = "Hello " ++ name ++ "!";
    let a = hello("World");|}
          ->React.string
    </code>

  </pre>
    <p>{text("And now, we are going to ")} <strong>{text("transpile-reason-to-ocaml")}</strong>{text(":")}</p>

  <pre><code className="language-transpile-reason-to-ocaml">
    {|let hello (name) = "Hello " ++ name ++ "!";
    let a = hello("OCaml");|}
          ->React.string
    </code>
</pre>


    // <p>{React.string("Let’s say you have an ")}<code className="language-plaintext highlighter-rouge">{React.string("animal")}</code> {React.string("variant")}</p>
    // <pre><div className="klipse-snippet klipse-eval-reason-3-with-types"><div className="CodeMirror cm-s-default CodeMirror-wrap"><div style={j|"overflow: hidden; position: relative; width: 3px; height: 0px; top: 5px; left: 5px;"|j}><textarea autocorrect="off" autocapitalize="off" spellcheck="false" tabindex="0" style={j|"position: absolute; bottom: -1em; padding: 0px; width: 1000px; height: 1em; outline: none;"|j}></textarea></div><div className="CodeMirror-vscrollbar" cm-not-content="true" style={j|"width: 18px; pointer-events: none;"|j}><div style={j|"min-width: 1px; height: 0px;"|j}></div></div><div className="CodeMirror-hscrollbar" cm-not-content="true" style={j|"height: 18px; pointer-events: none;"|j}><div style={j|"height: 100%; min-height: 1px; width: 0px;"|j}></div></div><div className="CodeMirror-scrollbar-filler" cm-not-content="true"></div><div className="CodeMirror-gutter-filler" cm-not-content="true"></div><div className="CodeMirror-scroll" tabindex="-1"><div className="CodeMirror-sizer" style={j|"margin-left: 0px; margin-bottom: 0px; border-right-width: 30px; min-height: 74px; padding-right: 0px; padding-bottom: 0px;"|j}><div style={j|"position: relative; top: 0px;"|j}><div className="CodeMirror-lines"><div style={j|"position: relative; outline: none;"|j}><div className="CodeMirror-measure"><pre><span>xxxxxxxxxx</span></pre></div><div className="CodeMirror-measure"></div><div style={j|"position: relative; z-index: 1;"|j}></div><div className="CodeMirror-cursors"><div className="CodeMirror-cursor" style={j|"left: 4px; top: 0px; height: 22px;"|j}>&nbsp;</div></div><div className="CodeMirror-code"><pre className=" CodeMirror-line "><span style={j|"padding-right: 0.1px;"|j}><span className="cm-keyword">type</span> <span className="cm-variable">animal</span> <span className="cm-operator">=</span> </span></pre><pre className=" CodeMirror-line "><span style={j|"padding-right: 0.1px;"|j}><span className="cm-operator">|</span> <span className="cm-variable">Dog</span></span></pre><pre className=" CodeMirror-line "><span style={j|"padding-right: 0.1px;"|j}><span className="cm-operator">|</span> <span className="cm-variable">Cat</span> </span></pre></div></div></div></div></div><div style={j|"position: absolute; height: 30px; width: 1px; border-bottom-width: 0px; border-bottom-style: solid; border-bottom-color: transparent; top: 74px;"|j}></div><div className="CodeMirror-gutters" style={j|"display: none; height: 104px;"|j}></div></div></div></div><div className="klipse-result klipse-eval-reason-3-with-types"><div className="CodeMirror cm-s-default CodeMirror-wrap"><div style={j|"overflow: hidden; position: relative; width: 3px; height: 0px; top: 5px; left: 5px;"|j}><textarea autocorrect="off" autocapitalize="off" spellcheck="false" tabindex="0" style={j|"position: absolute; bottom: -1em; padding: 0px; width: 1000px; height: 1em; outline: none;"|j}></textarea></div><div className="CodeMirror-vscrollbar" cm-not-content="true" style={j|"width: 18px; pointer-events: none;"|j}><div style={j|"min-width: 1px; height: 0px;"|j}></div></div><div className="CodeMirror-hscrollbar" cm-not-content="true" style={j|"height: 18px; pointer-events: none;"|j}><div style={j|"height: 100%; min-height: 1px; width: 0px;"|j}></div></div><div className="CodeMirror-scrollbar-filler" cm-not-content="true"></div><div className="CodeMirror-gutter-filler" cm-not-content="true"></div><div className="CodeMirror-scroll" tabindex="-1"><div className="CodeMirror-sizer" style={j|"margin-left: 0px; margin-bottom: 0px; border-right-width: 30px; min-height: 30px; padding-right: 0px; padding-bottom: 0px;"|j}><div style={j|"position: relative; top: 0px;"|j}><div className="CodeMirror-lines"><div style={j|"position: relative; outline: none;"|j}><div className="CodeMirror-measure"><span><span></span>x</span></div><div className="CodeMirror-measure"></div><div style={j|"position: relative; z-index: 1;"|j}></div><div className="CodeMirror-cursors"><div className="CodeMirror-cursor" style={j|"left: 4px; top: 0px; height: 22px;"|j}>&nbsp;</div></div><div className="CodeMirror-code"><pre className=" CodeMirror-line "><span style={j|"padding-right: 0.1px;"|j}><span className="cm-keyword">type</span> <span className="cm-variable">animal</span> <span className="cm-operator">=</span> <span className="cm-variable">Dog</span> <span className="cm-operator">|</span> <span className="cm-variable">Cat</span></span></pre></div></div></div></div></div><div style={j|"position: absolute; height: 30px; width: 1px; border-bottom-width: 0px; border-bottom-style: solid; border-bottom-color: transparent; top: 30px;"|j}></div><div className="CodeMirror-gutters" style={j|"display: none; height: 60px;"|j}></div></div></div></div><div className="klipse-container" id="klipse-container-0"></div><div className="klipse-separator"></div></pre>
    </div>

}