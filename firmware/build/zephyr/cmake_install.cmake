# Install script for directory: /Users/vallyashov/study/keebs/zmk/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Users/vallyashov/Documents/gcc-arm-none-eabi-8-2019-q3-update/bin/arm-none-eabi-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/arch/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/lib/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/soc/arm/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/boards/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/subsys/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/drivers/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/CANopenNode/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/civetweb/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/cmsis/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/fatfs/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/atmel/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/espressif/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/hal_gigadevice/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/hal_nordic/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/nuvoton/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/quicklogic/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/hal_rpi_pico/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/stm32/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/telink/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/libmetal/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/littlefs/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/lvgl/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/lz4/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/mbedtls/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/mipi-sys-t/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/nanopb/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/nrf_hw_models/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/open-amp/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/sof/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/tflite-micro/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/tinycbor/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/tinycrypt/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/TraceRecorder/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/zscilib/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/modules/drivers/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/kernel/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/cmake/flash/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/cmake/usage/cmake_install.cmake")
  include("/Users/vallyashov/study/keebs/dactyl-alps-zmk/firmware/build/zephyr/cmake/reports/cmake_install.cmake")

endif()

