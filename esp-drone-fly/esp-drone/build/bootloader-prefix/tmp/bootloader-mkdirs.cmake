# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v4.4.8/components/bootloader/subproject"
  "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader"
  "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader-prefix"
  "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader-prefix/tmp"
  "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader-prefix/src/bootloader-stamp"
  "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader-prefix/src"
  "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/makxenia/esp-drone/ESP-Drone/Firmware/esp-drone/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
