# QMK Userspace

This repository contains my QMK keymaps for my [Keychron K3 Max keyboard](https://keychron.de/de/products/keychron-k3-max-qmk-via-wireless-custom-mechanical-keyboard-iso-layout-collection?variant=42301708140681).
The main repository for the QMK firmware is available [here](https://github.com/qmk/qmk_firmware).

Currently implemented keymaps:
- NeoQWERTZ (no full support yet, see below)

## Notes for each keymap
As stated before, all keymaps are for the [Keychron K3 Max](https://keychron.de/de/products/keychron-k3-max-qmk-via-wireless-custom-mechanical-keyboard-iso-layout-collection?variant=42301708140681). Because of that the keymaps are based on the Keychron fork of the QMK firmware. You can find the source code [here](https://github.com/Keychron/qmk_firmware/tree/wireless_playground/keyboards/keychron/k3_max).

When flashing the keyboard, read the [QMK documentation](https://docs.qmk.fm/newbs_flashing) and have a look at the [Keychron guide](https://keychron.de/de/pages/how-to-factory-reset-and-flash-firmware-for-your-k3-max-keyboard).

The keyboard supports runtime customization with VIA, though only with the [Keychron configurator](https://launcher.keychron.com/), not with the official VIA app.

### NeoQWERTZ
The base for this layout is the [QWERTZ version](https://neo-layout.org/Layouts/neoqwertz/) of the (for german layout) ergonomical optimized [Neo layout](https://neo-layout.org/).

Additionally, this includes also the default layout from Keychron for Windwows on layers 0 and 1. The NeoQWERTZ layout is on layers 2 and up. To switch between them, the hardware switch on the keyboard can be used.

Attention! This implementation for QMK does not contain all symbols and layers defined by the original NeoQWERTZ layout.

**Limitations:**
- Layer 2 does not contain
  - the symbols on the numbers
  - the in german unused accents
  - the longer dashes and "big" dot on comma, dot and minus
- Layer 3 
  - does not contain the unicode characters
  - has the § on 3
  - has the € on 4
- Layer 4 does not contain the unicode characters
- Layer 5 and 6 are fully omitted

## Howto build locally
1. Create a directory for QMK `mkdir qmk && cd qmk`
1. Create a Pytohn virtual environment in this folder `python3 -m venv .venv && source .venv/bin/activate`
1. Install QMK `python3 -m pip install qmk`
1. Setup QMK environment `qmk setup --home ./qmk_firmware --branch wireless_playground Keychron/qmk_firmware`
    - Allow the setup to set your QMK home to `./qmk_firmware`
    - During development the branch above was referred by offical Keychron website but does not build with QMK userspace v1.1
    - Use `wls_2025q1` instead, after it's merged, `wireless_playground` should also work fine
1. Clone this repository `git clone git@github.com:ByteSturm/qmk_userspace.git`
1. Set the QMK userspace overlay `cd qmk_userspace/ && qmk config user.overlay_dir="$(pwd)"`
1. Verify the overlay is correctly configured `qmk config user.overlay_dir`
1. Compile the firmware
    - Build all `qmk userspace-compile`
    - Build a specific keymap
        - NeoQWERTZ `qmk compile -kb keychron/k3_max/iso/rgb -km via_neoqwertz`
