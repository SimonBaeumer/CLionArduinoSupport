# Arduino CLion setup

This is a tutorial on how to setup your environment to develop in CLion IDE for arduino.

## Dependencies

 - Ant
 - platformio
 - python-pip
 - IntelliJ Plugin Serial Monitor

## Setup

Install `platformio` via `python-pip`

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

### Via Ant - only with CLion

Run `ant upload` from your project root and it will be all done!

### Via CLion

Use the `PLATFORMIO_UPLOAD` configuration and use build to upload and compile your sketch, `Ctrl + F9`. (DO NOT USE RUN OR DEBUG)

### Via platformio

Run `platformio run --target upload`

### Permission issues

In some cases you must add `udev` rules, see:
https://raw.githubusercontent.com/platformio/platformio/develop/scripts/99-platformio-udev.rules

## Serial Monitor

Install the Serial Monitor plugin in your IDE. You can find it [here](https://plugins.jetbrains.com/plugin/8031?pr=idea).

Configure it under `File | Settings | Tools | Serial Monitor` and configure your port from the drop down list.

`platformio` can not upload your application to your ardunio while the Serial Monitor is connected.

## Links

[Blog post about Arduino integration by "Just antoher dev blog"](http://jandevblog.blogspot.de/2016/01/how-to-use-intellij-idea-to-develop-and.html)

[platformio documentation for CLion integration](http://docs.platformio.org/en/stable/ide/clion.html)
