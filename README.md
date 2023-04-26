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
 
## Basic informations

Everything started with an OnStep chat topic: [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440). It lead to this design.

## Purpose of this design

Letting you get started with the wireless Smart Hand Controller. 

- Build a **wireles** SHC - no ST4 or cable
- **Fast** (standard comonents)
- **Cheap** (standard compnents)
- In the first place you should get every component within days in your country (no China-imports necessary just get started) 
- **No welding** required (dupont connector, probably using a crimp tool if you like special cable length)
- **No PCB** necessary
- Battery (for no) not included - use with a small, external battery pack

The intended usage is prototyping, testing. But it also should meet the requirements to use it in the field as a full featured and robust wSHC.

The model is bulky, because of the use of standard breakout boards and shields. There exist others which use PCBs. Have  

## More to come

- Detailed instructions, video 
- More versions to come (OLED sizes, breakount boards, 30/38 pin layout of ESP32, battery pack,).

**For now there does not exist a detailed HowTo.** Please be patient. 

## What you need - BOM

1. [ESP32 30 pim](pics/ESP32_30pin_left_layout_comparison.jpg) (just the baseplate) best with USB-C jack
2. [Arduino form factor breakout board for the ESP32](pics/ESP32-30pin-BO1-ESP32_compact_breakout_and%20ESP32.jpg) (Dupont variant) with USB-C (V) and a standard 5/2.1 mm jack (4.5 to 16V) - other breakout boards might fit. But these are very common. 
3. [Arduino form factor Joystick shield](hpics/ITEAD_Joystickshield_DS.pdf)
4. OLED 1,3 inch (I use a white one and put a red foil on it for the night)
5. Dupont cables (female 2 female) OR (which is better) a crimp toolset and cables to make your own length
6. A standard USB-C battery pack or, for the breakout board 6,5 to 14V DC input (standard 5/2.1 mm jack)- until now there is not space for the battery  
7. A working OnStep (no simulation mode possible!)
8. Knowing how to configer SHC code and upload (next section)

Prices: 
- ESP32 30pin 5-7 €
- Breakout board: 5 €
- OLED. 5-8€
- Cables: 5 € or Crimpset 30 €
- Battery Pack: nothing, what you have (Powerbank small, big, 12V jack ...) or a little powerpack 5-10 €

Togeter: 15 € if you are in a hurry (Amazon/Ebay) and well suited otherwise (battery, cables) - more, if you start from scatch. If you have time and will save costs you can get everything from China for under 10 €.

**BE AWARE:** 
THERE ARE DIFFERENCES IN HARDWARE SPECS. 
THIS IS FORE ESP32 (30pin) | ARDUINO FORM FACTOR BREAKOUT BOARD AND JOYSTICK SHIELD.
PLEASE LOOK AT THE PICTUES DIRECTORY.

Everything will  reusable for a other 


## Source code

Dealing with the source code is not easy, especially if you are new to OnStep, to ESP32 development, or to 

1. You need to read carefully the main SHC instructions [howto install the software on the OnStep site -> right side -> Smart Hand Controller](https://onstep.groups.io/g/main/wiki).
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

You find all 3d files including Fusion360 and 3MF/STL in the **directory "3d" in this repository**. These are work in progress. I design with Fusion360 and will update the files after every major milestone.
The parts are very tight. I like to use as less as possible screws (if possible no). Some parts have to be glueed together. 

The model is bulky, because of the use of standard breakout boards and shields.


Printer:    Prusa MK3S
Material:   PLA (in the moment) - trying to go with PC and PETG, but this has to be tested
