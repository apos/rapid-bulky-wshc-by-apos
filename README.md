# Rapid bulky wSHC by apos

## Preface
This is for building a wireless [Smart Hand Controller (wSHC)](https://onstep.groups.io/g/main/wiki/7152) for the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home) with

- ESP32 (30 pin, see pics)
- Breakout board (ESP32 30 pin, see pics)
- Joystick shield (ITEAD, see pics)

More versions to come.

**For now there does not exist a detailed HowTo.** This will come. 

## Basic information

Please be patient and first read:

- OnStep chat topic: [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440)

Dealing with the source code is not easy 

1. You need to read carefully [howto install the software on the OnStep site](https://onstep.groups.io/g/main/wiki/7152).
2. You have to use the [main tree of the SHC software code](https://github.com/hjd1964/SmartHandController/tree/main) to get things running as stated in the [instructions](https://onstep.groups.io/g/main/wiki/7152). This and only this branch contains the necessary code to get things running 
3. You need to add configuration code to your **Config.h** (section `// KEYPAD`) to get things running. Especially the joystick probably needs finetuning (hysteresis) and the buttons debounce settings. Probably you need to alter the Joysticks direction (`#define X_PIN#_ACTIVE...`).
- See config directory in this repository. There you will find the Config.h I use.
- **The additional in Config.g settings do not exist per default within the Config.h** You have to add dem manually. 
- See [thread on OnStep](https://onstep.groups.io/g/main/message/51440) chat above.

This is work in progress, here and in the OnStep SHC source code (tree main). Until now it is limited to special hardware.


## More 
More content to come (be patient (2023/04))
