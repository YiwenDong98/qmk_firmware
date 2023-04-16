# theguy/macropad

![theguy/macropad](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Yiwen](https://github.com/YiwenDong98)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make theguy/macropad:default

Flashing example for this keyboard:

    make theguy/macropad:default:flash

For build with via support:

    make theguy/macropad:via

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Default Key Map for MSFS

+-----+-----+-----+-----+-----+-----+
| AP  | A/T | SPD | HDG | ALT | V/S |
+-----+-----+-----+-----+-----+-----+
| FD  | YD  | FLC | NAV | LOC | VNAV|
+-----+-----+-----+-----+-----+-----+
| LAY | APR | GA  | LVL | NP  | LAY |
+-----+-----+-----+-----+-----+-----+

NP: No Op

LAY: Switch Layers. left switch cycles between 4 layers. right switch goes to first layer.

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


## Flash Bootloader with ArdrinoISP
- Upload ArdrinoISP example to uno
- Compile production binary with `make theguy/macropad:default:production`
- Execute (replace COM8 with appropriate port and hex file with correct hex)
`avrdude.exe -p atmega32u4 -c stk500v1 -b 19200 -U flash:w:"theguy_macropad_default_production.hex":i -P COM8 -U efuse:w:0xC3:m -U hfuse:w:0xD9:m -U lock:w:0x3F:m`
  - Arguments
    - `-p atmega32u4` model of target board
    - `-c stk500v1` how we're flashing. ArdrinoISP