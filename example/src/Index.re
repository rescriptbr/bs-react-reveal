open ReactReveal;

[@bs.val]
external import: string => unit = "require";

import("./styles.css");

module Divider = {
  [@react.component]
  let make = () => <div> <br /> <hr /> <br /> </div>;
};

module App {
  [@react.component]
  let make = () => {
    <>
    <Fade> <h2> "Fade"->React.string</h2> </Fade>
    <Divider />
    <Flip> <h2> "Flip"->React.string</h2> </Flip>
    <Divider />
    <Rotate> <h2> "Rotate"->React.string</h2> </Rotate>
    <Divider />
    <Zoom> <h2> "Zoom"->React.string</h2> </Zoom>
    <Divider />
    <Bounce> <h2> "Bounce"->React.string</h2> </Bounce>
    <Divider />
    <Slide> <h2> "Slide"->React.string</h2> </Slide>
    <Divider />
    <Roll> <h2> "Roll"->React.string</h2> </Roll>
    <Divider />
    <LightSpeed> <h2> "LightSpeed"->React.string</h2> </LightSpeed>
    <Divider />
    <Jump> <h2> "Jump"->React.string</h2> </Jump>
    <Divider />
    <Flash> <h2> "Flash"->React.string</h2> </Flash>
    <Divider />
    <HeadShake> <h2> "HeadShake"->React.string</h2> </HeadShake>
    <Divider />
    <Jello> <h2> "Jello"->React.string</h2> </Jello>
    <Divider />
    <Pulse> <h2> "Pulse"->React.string</h2> </Pulse>
    <Divider />
    <RubberBand> <h2> "RubberBand"->React.string</h2> </RubberBand>
    <Divider />
    <Shake> <h2> "Shake"->React.string</h2> </Shake>
    <Divider />
    <Spin> <h2> "Spin"->React.string</h2> </Spin>
    <Divider />
    <Swing> <h2> "Swing"->React.string</h2> </Swing>
    <Divider />
    <Tada> <h2> "Tada"->React.string</h2> </Tada>
    <Divider />
    <Wobble> <h2> "Wobble"->React.string</h2> </Wobble>
    <Divider />
    </>
  }
};

ReactDOMRe.renderToElementWithId(<App />, "root");
