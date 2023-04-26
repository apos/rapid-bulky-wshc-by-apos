# Rapid bulky wSHC by apos


rapid bulky wSHC by apos (Rapid_Bulky_wSHC_V13_01 / very early version) </br>
<img src="pics/ESP32-30pin-BO1-Rapid_Bulky_wSHC_V13_01.jpg" width="600"> 

rapid bulky wSHC by apos (Rapid_Bulky_wSHC_V32_01 / near ready) </br>
<img src="https://user-images.githubusercontent.com/456034/234690175-c3403506-e03c-4041-9ca3-3b637d9a90ad.png" width="300"> <img src="https://user-images.githubusercontent.com/456034/234690468-60de81e5-2e7a-4b52-806b-2a95a310739b.png" width="300">

## Preface
This is for building a wireless [Smart Hand Controller (wSHC)](https://onstep.groups.io/g/main/wiki/7152) for the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home) with

- ESP32 (30 pin, see pics) | standard, no battery port
- Breakout board (ESP32 30 pin, see pics) | dupont
- Joystick shield (ITEAD, see pics) | very slim, Arduino form factor 

## Why?

Letting you get started with the wireless Smart Hand Controller. 

- Fast (standard comonents)
- Cheap (standard compnents)
- In the first place you should get every component within days in your country (no China-imports necessary just get started) 
- No welding required (dupont connector, probably using a crimp tool if you like special cable length)
- No PCB necessary

The intended usage is prototyping, testing. But it also should meet the requirements to use it in the field as a full featured and robust wSHC.

## More to come

- Detailed instructions, video 
- More versions to come (OLED sizes, breakount boards, 30/38 pin layout of ESP32, battery pack,).

**For now there does not exist a detailed HowTo.** Please be patient. 

## Basic informations

Please be patient and first read:

- OnStep chat topic: [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440)

## Source code

Dealing with the source code is not easy, especially if you are new to OnStep, to ESP32 development, or to 

1. You need to read carefully the main SHC instructions [howto install the software on the OnStep site](https://onstep.groups.io/g/main/wiki/7152).
2. At time of writing you have to use the [main tree of the SHC software code](https://github.com/hjd1964/SmartHandController/tree/main) to get things running as stated in the [instructions](https://onstep.groups.io/g/main/wiki/7152). This and only this branch contains the necessary code to get things running 
3. You need to add special configuration code to your **Config.h** (section `// KEYPAD`) to get things running. Especially the joystick probably needs finetuning (hysteresis) and the buttons debounce settings. Probably you need to alter the Joysticks direction (`#define X_PIN#_ACTIVE...`). You can find my Config.h in the config directory within this repository.
- The additional Config.h settings do not exist per default, when you checkout the code. You have to add dem manually. 
- Again: probably it is wise to have a look into the starter [thread on OnStep chat](https://onstep.groups.io/g/main/message/51440) like mentioned above.

This is work in progress, here and in the OnStep SHC source code (tree main). Until now it is limited to special hardware.

### Platform.io

I use the Visual Studio code plugin for [platform.io](https://platform.io). If you do this you need:

- special platformio.ini (see platfomrio dir)
- remame SmartHandController.ino to SmartHandController.cpp
- know how to use platform.io (I can and will not give support on this)


## 3D-printer models

These are work in progress. I design with Fusion360 and will update the files after every major milestone.

The parts are very tight. I like to use as less as possible screws (if possible no). The model is bulky, because of the use of standard breakout boards and shields.

You find all 3d files including Fusion360 and 3MF/STL in the directory "3d" in this repository. 

Printer:    Prusa MK3S
Material:   PLA (in the moment) - trying to go with PC and PETG, but this has to be tested
