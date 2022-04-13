# Firmware for the dactyl build

This contains the ZMK shield config.

## Compilation

- Set shell env to zmk
`source zmk/zephyr/zephyr-env.sh`

- Build each side
`west build --pristine -b nice_nano_v2 -- -DSHIELD=tracer_left -DZMK_CONFIG="dactyl-tracer-zmk/config"`
