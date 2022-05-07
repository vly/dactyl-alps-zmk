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

## Todo

- Change the bottom most thumbcluster switches to the alps locking types to act as power switches (alternatively use toggle switches from Gameboy on the baseplate as the rubber feet provide enough clearance).
- Optimise the timing for thumbcluster layer hold keys as fast typing causes accidental shortcut activations.
- Add wheel balance weights to each side to increase the heft of the keeb. A little bit too light at the moment.
- Change orientation of first two thumbcluster switch holes so that I can mount 1.25u keycaps.
- Fix the bottom plate design to sit more flush with the top section (currently a bit of overhang at the edges).
- Give more spacing around the controller holder insert point so I don't have to shave it manually.
- Thicken the middle standoff screw point as its rather fragile currently.
- Experiment with lowering the thumb cluster (or raising the main area) ala lime40 or the tall chonkybois. Ergonomics are ok currently but I feel lower thumbs position would feel better for me.

