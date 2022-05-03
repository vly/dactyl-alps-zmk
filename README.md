# dactyl-alps-zmk

![Dactyl alps](/images/completed.jpg?raw=true "Dactyl alps wireless")

A wireless dactyl manuform build with alps switches.

## Build

This build uses nice!nano v2 as controllers and single switch pcbs to aid in the wiring.
For controller holders, I opted to use chonkybois pro micro ones by sndr666 which makes for a tidy final result.

Although I do have a physical reset/bootloader switch wired up for initial flashing, I ended up using soft codes for subsequent reflashing.

## Firmware

Using ZMK for the firmware. With the way I have been wiring up, am using row2col.
To build locally use the following commands:

```
source PATH-TO-ZMK/zephyr/zephyr-env.sh
west build --pristine -b nice_nano_v2 -s PATH-TO-ZMK/app -- -DSHIELD=dactyl_alps_left -DZMK_CONFIG="dactyl-alps-zmk/firmware/config"
```

This builds the left side, do the same for the right.
