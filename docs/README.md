# Browser Tamer

[![](https://www.aloneguid.uk/projects/bt/one.png)](https://www.aloneguid.uk/projects/bt/)

| [official home page](https://www.aloneguid.uk/projects/bt/) - [documentation](https://aloneguid.github.io/bt/home.html) |
|:------------------------------------------------------------:|

## 📦Features at a Glance

- Extremely lightweight on memory and resources, written in safe modern C++.
  - Self-contained single `.exe` under 2 Mb in size with no dependencies.
  - Available as `.msi` [installer](https://aloneguid.github.io/bt/install-msi.html).
  - [Portable mode](https://aloneguid.github.io/bt/portable-mode.html) supported.
  - Fits on a floppy disk if you can find it in 2023! 💾
- Completely free and [open-source](https://github.com/aloneguid/bt).
- Intelligent detection of the most popular browsers.
  - **Firefox**, **Edge**, **Chrome**, **Brave** and so on.
  - Detection of browser profiles.
  - Support for [Firefox Containers](https://aloneguid.github.io/bt/firefox-containers.html).
  - Support for incognito mode / tor mode.
- Add your own, custom browser or application customised with any parameters you want.
- Rule-based redirect based on matching inside entire URL, domain, or path. This can be a simple case-insensitive substring or a regular expression.
- Rule-based redirect based on [window title and process name](https://aloneguid.github.io/bt/rules.html#matching-locations).
- Assign rule priorities.
- Support for [shortened URLs](https://aloneguid.github.io/bt/url-processing.html#un-shortening).
- Support for [Office 365 link unwrapping](https://aloneguid.github.io/bt/url-processing.html#office-365-link-unwrapping).
- **[Extensions](https://aloneguid.github.io/bt/browser-extensions.html)** to integrate with Chrome, Edge, Firefox, or any Chromium-based or Firefox-based browser (Opera, Vivaldi, Brave, Waterfox etc.).
[![Chrome Web Store Version](https://img.shields.io/chrome-web-store/v/oggcljknmiiomjekepdoindjcpnpglnd)](https://chrome.google.com/webstore/detail/browser-tamer/oggcljknmiiomjekepdoindjcpnpglnd)  [![Mozilla Add-on Version](https://img.shields.io/amo/v/browser-tamer)](https://addons.mozilla.org/eu/firefox/addon/browser-tamer/)

- Open links in ["chromeless (frameless)" window](https://aloneguid.github.io/bt/rules.html#frameless-windows).
- Optional [audit](https://aloneguid.github.io/bt/config-basic.html#audit) of rule hits to a csv file.
- Beautiful UI based on [ImGui](https://github.com/ocornut/imgui) (GPU-accelerated UI engine used in games) with support for [themes](/posts/2022/12/bt-theming/).

## Raising an Issue

Feel free to [raise an issue here](https://github.com/aloneguid/bt/issues/new) or [start a discussion](https://github.com/aloneguid/bt/discussions/new/choose).

## Contributing

I value your interest in this open-source project. While **I don't accept pull requests** (there is no way to turn them off in GitHub), your support through coffee donations directly contributes to the project's development and sustainability, allowing me to invest more resources into refining, addressing issues, and implementing new features. Your involvement, in any form, is greatly appreciated. Thank you for being a part of our journey!

<a href="https://www.buymeacoffee.com/alonecoffee" target="_blank"><img height="50" src="bmc-button.svg" /></a>
