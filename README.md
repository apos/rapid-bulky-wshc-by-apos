# Rapid bulky wSHC by apos

A very early prototype :-) </br>
<img src="media/V01/ESP32-30pin-BO1-Rapid_Bulky_wSHC_V13_01.jpg" width="600"> 

Rapid_Bulky_wSHC_V39_M1 / Near final version of reference design V01 </br>
<img src="3d/V01/V01_M1_01.png" width="300"> <img src="3d/V01/V01_M1_03.png" width="300">  <img src="3d/V01/V01_M1_02.png" width="300"> 

## Note on git checkout
This repository contains a lot of binary files in it's history. Please only checkout the branch "latest" to reduce download size. 

<img src="https://user-images.githubusercontent.com/456034/235279891-f09abd70-69a6-4d5d-901d-9b8bd1f60407.png" width="600"> 

## Preface
This is for building a wireless [Smart Hand Controller (wSHC)](https://onstep.groups.io/g/main/wiki/7152) for the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home) with

- ESP32 (different layouts will be supported over time
- Breakout board (ESP32 30 pin, see media) with e.g. dupont connectors 
- Joystick shield 

Many thanks to [Howard Dutton](http://www.stellarjourney.com/) which is the founder and lead developer of the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home). He did the main work on altering the source code so that things are working with the joystick shield (which they did not in the first place).

*Annotation*: **this is not the documentation for an SHC implementation**. This proect only gives you reference designs amoung many others and a combination of hardware that is tested and works, a 3d model to print and some hints about getting things donw. **You need in any case:**

1. A working [OnStep with wireless functionality](https://onstep.groups.io/g/main/wiki) (no simulation mode possible - you will not get over the start screen in SHC)
2. Knowing how to configure the [Smart Hand Controller](https://onstep.groups.io/g/main/wiki/Smart-Hand-Controller) and the ability to program the ESP32 and upload it (Arduino IDE, Platform.io).

CS [Axel](https://avvp.de/portfolio-view/axel-pospischil)
 
## History

Everything started with an OnStep chat topic: [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440). I had laying around some ESP32 and a Joystick board with buttons. When I found out, that the SHC is simply that, I liked the idea for prototyping or even more. I did not order a PCB, extra parts or doing welding at the weekend just to get started with an wSHC when the list of components seem to be so simple. This lead to this project. 

## Purpose

Be able to rapidly build a wireless Smart Hand Controller with common standard parts and a oystick shield: 

- Build to use with **button / joystick shield**
- Build a **wireles** SHC - no ST4 or cable
- Build it **fast** (simply put things together)
- Build it **cheap** (standard compnents)
- In the first place use standard components. You should get every part within days in your country or your local hardware store
- No long waiting China-imports necessary in the first place just to get started
- **No welding** required (dupont connector, probably using a crimp tool if you like special cable length)
- **No PCB** necessary
- Battery (for no) not included - use with a small, external battery pack

The intended usage is prototyping, testing. But it also meets the requirements to use it in the field as a full featured and robust wSHC.

The model is bulky, because of the use of standard breakout boards and shields. There exist others which use PCBs. This project gives you the time to do a more suffisticated wSHC without having one in the meantime :-)

### What you need
It depends on the reference design (version) of the "bulky wSHC" you like to build.

To do this you need:

4. Access to a 3D printer with PLA (or other materials which can be fine printed)
5. [A standard ESP32 with 30 pim](media/ESP32_30pin_left_layout_comparison.jpg) (just the baseplate) best with USB-C jack
6. [An Arduino form factor breakout board for the ESP32](media/ESP32-30pin-BO1-ESP32_compact_breakout_and%20ESP32.jpg) (Dupont variant) with USB-C (V) and a standard 5/2.1 mm jack (4.5 to 16V) - other breakout boards might fit. But these are very common. 
7. [A Joystick shield](hmedia/ITEAD_Joystickshield_DS.pdf). The one I use here is very small. Reference Design V01 uses this one.
8. An OLED 1,3 inch screen (I use a white colored one and put a red foil on it for the night)
9. 15 cm long Dupont cables (female 2 female) OR use a crimp toolset and cables to make your own length (which is better). You can save a lot of time, if you buy preconfigured dupont cables (2,4,5 bundled). These hold better than single cables.
10. A standard USB-C battery pack or, for the breakout board 6,5 to 14V DC input (standard 5/2.1 mm jack)- until now there is not space for the battery  
11. A USB-C cable for programming and loading the ESP32 / Board

### Costs 
#### Total costs

| Total per unit | Version | Notes |
| ------------- | -------- | ------------- | 
| 15-20 € | V01 | if you are in a hurry (Amazon/Ebay) and well suited otherwise (battery, cables) |
| under 10 € | V01 | if you have time and will save a lot of costs you can get everything from China sellers. This is intersting, if you have a class, order more than one parts and want to build this for a group of people.  |
| 30+ € | All | More, if you start from scatch and need cables, battery pack, crimp tool |

#### All Versions (parts needed)

| Part | Version | Notes | Cost |
| ------------- | -------- | ------------- | ----------- |
| Cables | All | Use only **good quality, standard dupont cables** 10 to 15 cm long or use preconfigured 2,3,4,5 pin ones. It is wise to use cable headers. Single connections could be troublesome. | Cents |
| Cables | All | **Crimpset**, this is a good investment for many projects | 30-50 € |
| Battery Pack | All | Power supply, 5V powerbank (USB-C/Micro-USB), 5mm/2.1mm jack (6 to 14,5 V) | depends if you have to buy or can reuse  |

**Reference design 01 (V01)**

| Part | Version | Notes | Cost |
| ------------- | -------- | ------------- | ----------- |
| ESP32  | V01 | 30pin  | 5-7 € |
| Breakout board  | V01 | for ESP32/30pin Arduino form factor  | 5 € |
| Joystick shield  | V01 | ITEAD (seems to be not avaiable very easy). Very slim design. Arduino form factor  | 5 € |
| OLED | V01 | 1,3 inch  | 5 € |
| Filament | V01 | PLA | 2-3 € |
| Cables | V01 | 10 to 15 cm long (female to female) | Cents |


### Build Time

#### Preparation

3d parts
- 4 hour 3d print (Prusa MKS3 Draft 0.3mm, 20% infill, no support) + 30 minutes for caps
- 7 hour 3d print (Prusa MKS3 Quality 0.2mm, 15% infill, no support)+ 45 minutes for caps

Cables
- You can save a lot of time, when you use preconfigured cables with already have preconfigured dupont connectors (2 / 4 / 5 in a row). E.g. crimping takes the most of time.
- Crimping is way more better than welding

#### Classroom project

If you already implemented an OnStep controller with peoplo of you astronomy club, it is very easy now to get everything running with a wireless SHC. You will be surprised how much more intuitive this is, than using the handy app.

If you are well prepared (get cables ready, print parts) you will make this in a 3 hour workshop. Inkluded a pause, 30min intro and 30 minutes for asking questions. 

You can save really a lot of money if you order the parts in China (takes usually 2 weeks shipping).


### More to come

- Detailed instructions, video 
- More versions to come (OLED sizes, breakount boards, 30/38 pin layout of ESP32, battery pack,).


# Reference designs (versions)

Any ESP32 and joystick board should work. For real world usage, there should be no bulky things on the top of the board! Pins you can get rid of, but not extra headers. I found this: https://de.aliexpress.com/item/32780304126.html (Keystudio Joystick shield). But it is bigger, I have to alter the design.

Within the folder structure in this repository you will find the different versions (hardware, configuration and 3d model).

## V01 (reference design V01)
### Feature list

- 3D Model [finalize 3d model for V01]([https://github.com/apos/rapid-bulky-wshc-by-apos/issues/2](https://github.com/apos/rapid-bulky-wshc-by-apos/issues/1))
- Configure.h tested: main branch (https://github.com/hjd1964/SmartHandController/commits/main)
- 128x64 OLED 1,3 inch (OLED 2,42 inch to come when code is implemented)
- External battery pack or power needed (USB-C / DC 5/2.1mm jack) 

### Components
This is the most compact combination of hardware I could find out there:

- [ESP32 30pin](https://de.aliexpress.com/item/1005004702430375.html)
- [Breakout board](https://de.aliexpress.com/item/1005004786802668.html) - very slim, pins on top (which is what you want). You can use others, probably there will be other 3D models in the future. This has an Arduino form factor and simly is the best I could found. 
- ITEAD joystick shields (bought them on eBay last year). 
- OLED 1,3''
- Optional: two M3 23mm length (not necessary, bevause parts should snap together

### Media
![grafik](https://user-images.githubusercontent.com/456034/234828495-9fc7945a-443b-43dd-a11a-569b4a9bc3a1.png)

<img src="media/V01/ITEAD_Shield_pinmap_ESP32_01.png" width=300> <img src="https://user-images.githubusercontent.com/456034/234848548-31534d51-8aed-4dec-b4e7-3f7b9aa3a3b2.png" width=300>
<img src="media/V01/rapid_bulky_wSHC_V01_BOM_a_ESP32_stacked_on_Board.jpg" width=300> 
<img src="3d/V01/V01_M1_01.png" width="300"> <img src="https://user-images.githubusercontent.com/456034/235221460-2df23ae3-cc37-4036-960e-92521f07b0b4.png" width="300">
 <img src="3d/V01/V01_M1_03.png" width="300"> <img src="3d/V01/V01_M1_02.png" width="300">

#### V01a with 1,3 inch OLED
<img src="https://user-images.githubusercontent.com/456034/234855272-b8b3f6c1-4e9e-45da-81e8-0ee3521e33b8.png" width=300>

## More versions to come

Please contribute at the tread [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440) .

## Instructions

Basically  orient yourself on the pinmap of the SHC code for ESP32 and you read the look at the wirering plan in the media directory for the ITEAD joystick shield.

### Dragons ahead

- THERE ARE DIFFERENCES IN HARDWARE SPECs for all of these parts out there.
- THIS IS FORE ESP32 (30pin), an ARDUINO FORM FACTOR BREAKOUT BOARD AND an AREDUINO FORMFACTOR JOYSTICK SHIELD.
- PLEASE LOOK AT THE PICTURES DIRECTORY for the hardware, that is used.

Everything will be reusable for a other projects and can be put apart totally. Nothing is soldered. 

Basically you can do this now wiht every ESP32 and Joystick board, BUT: you should know what you are doing and the 3D model probably will not fit.


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


# 3D-printer model

You find all 3d files including Fusion360 and 3MF/STL in the **directory "3d" in this repository**. Each one is for a certain Version. These are work in progress. I design with Fusion360 and will update the files after every major milestone.

The parts are very tight (no gap design). I like to use as less as possible screws (if possible no). Some parts have to be glued together. 

The model is bulky, because of the use of standard breakout boards and shields.

- Printer:    I use a Prusa MK3S
- Quality:    Tested with 0.3mm in draft mode. For a nice fit use 0.2mm quality mode . Do not use speed modes because of overhangs (stringing)
- Material:   PLA (in the moment) 1.75 mm - trying to go with PC and PETG, but this has to be tested
- Infill:     15-20% is enough
- Support:    not needed for most parts printed with PLA. Only for the OLED back. This might be not the case for other materials (not tested yet)
- Duration:   5,0 hours with Prusa MK3S in 0.3mm draft mode (everything will fit on the plate of a Prusa Printer). 

Important: 

- **Special orientation** on printer bed needed for some parts (see picture and red rectangles)
- Print the OLED housing and the front cap for the base **separately with support only on printer bed standing right up on the side** Otherwise you could get trouble (parts could go off the print bed, supports might not get off)
- Joystick "ring" and OLED housing back will be **glued** to it's corresonding parts with fast glue.

<img src="https://user-images.githubusercontent.com/456034/235000976-03d781d8-cdc6-410e-abe0-69a46fe85c04.png" width=600)>
<img src="https://user-images.githubusercontent.com/456034/235010482-c96bba09-c7de-494f-bbff-ae79dee9d333.png" width=400)>




