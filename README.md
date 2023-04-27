# Rapid bulky wSHC by apos


Rapid_Bulky_wSHC_V13_01 / very early version </br>
<img src="pics/V01/ESP32-30pin-BO1-Rapid_Bulky_wSHC_V13_01.jpg" width="600"> 

Rapid_Bulky_wSHC_V33_M1 / near final version </br>
<img src="3d/V01/v33_M1_01.png" width="300"> <img src="https://user-images.githubusercontent.com/456034/234690468-60de81e5-2e7a-4b52-806b-2a95a310739b.png" width="300">

## Preface
This is for building a wireless [Smart Hand Controller (wSHC)](https://onstep.groups.io/g/main/wiki/7152) for the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home) with

- ESP32 (30 pin, see pics) | standard, no battery port - DO NOT USE A ARDUINO FORM FACTOR ESP32 BOARS. PINs DO NOT MATCH
- Breakout board (ESP32 30 pin, see pics) | dupont - also Arduino form factor (size)
- Joystick shield (ITEAD, see pics) | very slim, Arduino form factor 

Many thanks to Howard Dutton which is the founder and lead developer of the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home), which did the main work on altering the source code so that things are working with the joystick shield (which they did not in the first place).

CS Axel
 
## Basic informations

Everything started with an OnStep chat topic: [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440). It lead to this design.

## Purpose of this design

Be able to rapidly build a wireless Smart Hand Controller with common standard parts and a oystick shield: 

- Build a **wireles** SHC - no ST4 or cable
- Build it **fast** (simply put things together)
- Build it **cheap** (standard compnents)
- In the first place you should get every component within days in your country (no China-imports necessary just get started) 
- **No welding** required (dupont connector, probably using a crimp tool if you like special cable length)
- **No PCB** necessary
- Battery (for no) not included - use with a small, external battery pack

The intended usage is prototyping, testing. But it also meets the requirements to use it in the field as a full featured and robust wSHC.

The model is bulky, because of the use of standard breakout boards and shields. There exist others which use PCBs. This project gives you the time to do a more suffisticated wSHC without having one in the meantime :-)

## What you need
 
First it depends on the version. 

1. Access to a 3D printer with PLA (or other materials which can be fine printed)
2. [A standard ESP32 with 30 pim](pics/ESP32_30pin_left_layout_comparison.jpg) (just the baseplate) best with USB-C jack
3. [An Arduino form factor breakout board for the ESP32](pics/ESP32-30pin-BO1-ESP32_compact_breakout_and%20ESP32.jpg) (Dupont variant) with USB-C (V) and a standard 5/2.1 mm jack (4.5 to 16V) - other breakout boards might fit. But these are very common. 
4. [A special Arduino form factor Joystick shield](hpics/ITEAD_Joystickshield_DS.pdf). The one I use here is very small
5. An OLED 1,3 inch screen (I use a white colored one and put a red foil on it for the night)
6. 15 cm long Dupont cables (female 2 female) OR use a crimp toolset and cables to make your own length (which is better). You can save a lot of time, if you buy preconfigured dupont cables (2,4,5 bundled). These hold better than single cables.
8. A standard USB-C battery pack or, for the breakout board 6,5 to 14V DC input (standard 5/2.1 mm jack)- until now there is not space for the battery  
9. A USB-C cable for programming and loading the ESP32 / Board
10. A working OnStep (a simulation mode possible - you will not get over the start screen)
11. Knowing how to configure the SHC code and upload and program it (next sections).

### Costs 

- ESP32 30pin 5-7 €
- Breakout board: 5 €
- OLED 5-8€
- PLA Filament: 2-3 €
- Good, but standard dupont cables 10 to 15 cm long (female to female): 5 € or Crimpset 30 €
- Battery Pack: nothing, what you have (your existing 5V powerbank, 12V jack ...) or buy a little powerpack 5-10 €. The SHC does not need much power (2500 mA suffice).
 
=> 15-20 € if you are in a hurry (Amazon/Ebay) and well suited otherwise (battery, cables) 
=> More, if you start from scatch and need cables, battery pack, crimp tool
=> If you have time and will save a lot of costs you can get everything from China for under 10 €. This is intersting, if you have a class and want to buuild this

### Build Time

- 4 hour pint (Prusa MKS3 Draft 0.3mm, 20% infill)
- You can save a lot of time, when you use preconfigured cables with already have preconfigured dupont connectors (2 / 4 / 5 in a row)

### Classroom project

If you already implemented an OnStep controller with peoplo of you astronomy club, it is very easy now to get everything running with a wireless SHC. You will be surprised how much more intuitive this is, than using the handy app.

If you are well prepared (get cables ready, print parts) you will make this in a 3 hour workshop. Inkluded a pause, 30min intro and 30 minutes for asking questions. 

You can save really a lot of money if you order the parts in China (takes usually 2 weeks shipping).


### More to come

- Detailed instructions, video 
- More versions to come (OLED sizes, breakount boards, 30/38 pin layout of ESP32, battery pack,).

**For now there does not exist a detailed HowTo.** Please be patient. 

# Versions to build

Any ESP32 and joystick board should work. For real world usage, there should be no bulky things on the top of the board! Pins you can get rid of, but not extra headers. I found this: https://de.aliexpress.com/item/32780304126.html (Keystudio Joystick shield). But it is bigger, I have to alter the design.

Within the folder structure in this repository you will find the different versions (hardware, configuration and 3d model).

## V01

![grafik](https://user-images.githubusercontent.com/456034/234828495-9fc7945a-443b-43dd-a11a-569b4a9bc3a1.png)

- [ESP32 30pin](https://de.aliexpress.com/item/1005004702430375.html)
- [Breakout board](https://de.aliexpress.com/item/1005004786802668.html) - very slim, pins on top (which is what you want). You can use others, probably there will be other 3D models in the future. This has an Arduino form factor and simly is the best I could found. 
- ITEAD joystick shields (bought them on eBay last year). 

## More to come 

Please contribute at the tread [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440) .




## Instructions

Basically  orient yourself on the pinmap of the SHC code for ESP32 and you read the look at the wirering plan in the pics directory for the ITEAD joystick shield.

<img src="pics/ITEAD_Shield_pinmap_ESP32_01.png" width=600>

### BE AWARE
- THERE ARE DIFFERENCES IN HARDWARE SPECs for all of these parts out there.
- THIS IS FORE ESP32 (30pin), an ARDUINO FORM FACTOR BREAKOUT BOARD AND an AREDUINO FORMFACTOR JOYSTICK SHIELD.
- PLEASE LOOK AT THE PICTURES DIRECTORY for the hardware, that is used.

Everything will be reusable for a other projects and can be put apart totally. Nothing is soldered. 


### Source code

Dealing with the source code is not easy, especially if you are new to OnStep, to ESP32 development, or to 

1. You need to read carefully the main SHC instructions [howto install the software on the OnStep site -> right side -> Smart Hand Controller](https://onstep.groups.io/g/main/wiki).
2. At time of writing you have to use the [main tree of the SHC software code](https://github.com/hjd1964/SmartHandController/tree/main) to get things running as stated in the [instructions](https://onstep.groups.io/g/main/wiki/7152). This and only this branch contains the necessary code to get things running 
3. You need to add special configuration code to your **Config.h** (section `// KEYPAD`) to get things running. Especially the joystick probably needs finetuning (hysteresis) and the buttons debounce settings. Probably you need to alter the Joysticks direction (`#define X_PIN#_ACTIVE...`). You can find my Config.h in the config directory within this repository.
- The additional Config.h settings do not exist per default, when you checkout the code. You have to add dem manually. 
- Again: probably it is wise to have a look into the starter [thread on OnStep chat](https://onstep.groups.io/g/main/message/51440) like mentioned above.

This is work in progress, here and in the OnStep SHC source code (tree main). Until now it is limited to special hardware.

### Program ESP32 - Platform.io
I use the Visual Studio code plugin for [platform.io](https://platform.io). Arduino IDE is enough though (and the new 2.0 version works perfectly)

If you do this you need:

- special platformio.ini (see platfomrio dir)
- remame SmartHandController.ino to SmartHandController.cpp
- know how to use platform.io (I can and will not give support on this)

BE AWARE: sometimes you have to press the "Donwload" button on the ESP32 to upload the code and you need the correct driver. Normally the USB-C variants are newer and have no problems.


## 3D-printer model

You find all 3d files including Fusion360 and 3MF/STL in the **directory "3d" in this repository**. These are work in progress. I design with Fusion360 and will update the files after every major milestone.

The parts are very tight (no gap design). I like to use as less as possible screws (if possible no). Some parts have to be glueed together. 

The model is bulky, because of the use of standard breakout boards and shields.


- Printer:    Prusa MK3S
- Material:   PLA (in the moment) - trying to go with PC and PETG, but this has to be tested
- Infill:     20% is enough
- Support:    no (all parts should print without problems with PLA)
- Duration:   5 hours (everything will fit on the plate of a Prusa

<img src="https://user-images.githubusercontent.com/456034/234721043-23e05c6f-3493-4108-bc2a-34353505e4ae.png" width=600)>

