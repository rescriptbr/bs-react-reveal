<p align="center">
  <br />
  <img src="./assets/logo.svg" width="450" /> 
</p>
<p align="center">
   <a href="#installation">Installation</a> • 
   <a target="_blank" href="#usage">Basic usage</a> • 
   <a href="#demo">Demo</a> • 
   <a href="#features">Status</a> •
</p>
<br/>
<br/>

## Installation

```sh
yarn add @reasonbr/bs-react-reveal
```
Add the package to the `bsconfig.json`
```json
{
 "bs-dependencies": [
  "@reasonbr/bs-react-reveal"
 ]
}
```

## Usage

```reason
open ReactReveal;

[@react.component]
let make = () => {
  <Fade>
   <h1>{React.string("Fade animation...")</h1>
  </Fade>
}
```
## Status
This is project is still `WIP`, but you can use all the components provided by [react-reveal](https://www.react-reveal.com/) with the almost all props.
### Supported features
- Component props:
    - `duration`: ✅
    - `delay`: ✅
    - `left`: ✅
    - `right`: ✅
    - `top`: ✅
    - `bottom`: ✅
    - `count`: ✅
    - `forever`: ✅
    - `mirror`: ✅
    - `opposite`: ✅
    - `distance`: ✅
    - `spy`: ✅ ⚠️ - Only int values for now `[WIP]`
    - `when`: ✅ ⚠️ - Only bool values for now `[WIP]`
    - `in`: ✅ - ⚠️ Only bool values for now `[WIP]`
    - `appear`: ✅
    - `enter`: ✅
    - `exit`: ✅
    - `timeout`: ✅
    - `mountOnEnter`: ✅
    - `unmountOnExit`: ✅
    - `force`: ✅
    - `refProp`: ⚠️ - Not yet `[WIP]`
    - `innerRef`: ⚠️ - Not yet `[WIP]`
    - `cascade`: ✅ 
    - `collapse`: ✅
    - `fraction`: ✅
    - `ssrFadeout`: ✅
    - `ssrReveal`: ✅
    - `wait`: ✅
    - `onReveal`: ✅
- `HOC's`: ⚠️ - Not yet `[WIP]`
- `Custom effects`: ⚠️ - Not yet `[WIP]`

## Docs
Check the official [react-reveal](https://www.react-reveal.com/docs/) documentation.
