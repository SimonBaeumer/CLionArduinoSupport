# Arduino CLion setup

## Dependencies

 - Ant
 - platformio
 - python-pip

## Setup

Run in your application folder:
`platformio init --ide clion --board %type%` 

For example:
`platformio init --ide clion --board uno` 

### Find your board

Run in your terminal:
`platformio boards`

The Ardunio micro controller will be listed under the `atmelavr` section.

**Example output:**
```
Platform: atmelavr
--------------------------------------------------------------------------------
ID                    MCU            Frequency  Flash   RAM    Name
--------------------------------------------------------------------------------
1284p16m              ATMEGA1284P    16Mhz     127kB   16kB   Microduino Core+ (ATmega1284P@16M,5V)
1284p8m               ATMEGA1284P    8Mhz      127kB   16kB   Microduino Core+ (ATmega1284P@8M,3.3V)
168pa16m              ATMEGA168P     16Mhz     15kB    1kB    Microduino Core (Atmega168PA@16M,5V)
uno                   ATMEGA328P     16Mhz     31kB    2kB    Arduino Uno
```

## Compiling and uploading

Type `ant upload` from your project root and it will be all done!

### Permission issues

In some cases you must add `udev` rules, see:
https://raw.githubusercontent.com/platformio/platformio/develop/scripts/99-platformio-udev.rules