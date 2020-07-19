module Fade = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Fade";
};

module Flip = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Flip";
};

module Rotate = {
  [@bs.module "react-reveal"] [@react.component]
  external make: 
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Rotate";
};

module Zoom = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Zoom";
};

module Bounce = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Zoom";
};

module Slide = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Zoom";
};

module Roll = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Zoom";
};

module LightSpeed = {
  [@bs.module "react-reveal"] [@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "Zoom";
};

module Jump = {
  [@bs.module][@react.component]
  external make:
  (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Jump";
};

module Flash = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Flash";
};

module HeadShake = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/HeadShake";
};

module Jello = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Jello";
};

module Pulse = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Pulse";
};

module RubberBand = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/RubberBand";
};

module Shake = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Shake";
};

module Spin = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a =  "react-reveal/Spin"
};

module Swing = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Swing";
};

module Tada = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Tada";
};

module Wobble = {
  [@bs.module][@react.component]
  external make: 
    (
      ~children: React.element=?,
      ~duration: float=?,
      ~delay: float=?,
      ~left: bool=?,
      ~right: bool=?,
      ~top: bool=?,
      ~bottom: bool=?,
      ~count: int=?,
      ~forever: bool=?,
      ~mirror: bool=?,
      ~opposite: bool=?,
      ~spy: int=?,
      ~_when: bool=?,
      ~_in: bool=?,
      ~appear: bool=?,
      ~enter: bool=?,
      ~exit: bool=?,
      ~timeout: float=?,
      ~mounOnEnter: bool=?,
      ~unmountOnExit: bool=?,
      ~force: bool=?,
      ~cascade: bool=?,
      ~collapse: bool=?,
      ~fraction: float=?,
      ~ssrFadeout: bool=?,
      ~ssrReveal: bool=?,
      ~wait: float=?,
      ~onReveal: unit => unit=?
    ) => 'a = "react-reveal/Wobble";
};

