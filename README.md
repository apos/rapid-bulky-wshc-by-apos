# Rapid bulky wSHC by apos (RPB wSHC)

Smallest version with external power bank or 6-16V DC. Version with 1,54'' OLED</br>
<img src="media/V01a_Reference_layout.jpg" width="600">

Version with 2,4'' OLED </br>
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/cada79fa-d38b-4851-8a12-9563c813e525" width="600">


A very early prototype :-) </br>
src="media/ESP32-30pin-BO1-Rapid_Bulky_wSHC_V13_01.jpg" width="300"> 

3D models </br>
<img src="media/V01_M1_01.png" width="300"> <img src="media/V01_M1_03.png" width="300">  <img src="media/V01_M1_02.png" width="300"> 

## YouTube video
In a hurry?: This video is 50minutes long :-) But you can skip some chapters if you are only interested in certain aspects (see timeline in video). But be warned: you might miss important informations, especially if you are new to the subject ;-) 

I recommend to read this page carefully afterwards to understand what to order and what to expect :-)

The video gives all informations needed from Adam to Eve, also includes an explanation of ESP32 form factors. But it is not on programming the SHC code onto the ESP32 with Arduino or Platform.IO IDE - only for assembling the parts.

Have fun. 

- https://www.youtube.com/watch?v=VndzQj0gUMc 

<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/92c97783-ecbc-45d6-abdd-bdf1eb0a577a" width="600">

## UPDATES on the "rapid bulky wSHC"

- 12.01.24: just updated to firmware 4.24s (SHC 4.01b) for hardware V01. Simply worked (see [here](https://onstep.groups.io/g/main/message/56564)).
- 08.05.23: got 2,42 OLED working - changed from SPI to IIC mode (welding) - you should get the 4pin version! SPI usage and cabling still not clear
- 07.05.23: 3d: Housing for 2,42'' OLED ready (could not pause completely pause today)
- 30.04.23: Pause for 2 weeks on project
- 30.04.23: Reference design V01, corresponding 3d-printable files on GitHub page and YouTube video are ready
- 27.04.23: Major Upgrades and all project informations at the central GitHub page.
- 26.04.23: Project name "rapid bulky wSHC by apos".
- 26.04.23: First prototype (3D), all further updates on files, STL, Fusion360, information you will find on GitHub (not GitLab, sorry)
- 25.04.23: Howard did some significant code refactoring and additions to Config.h. Shield is working. Abandoned usage of Espduino-32 (ESP32 with Arduino form factor). See https://onstep.groups.io/g/main/message/51416. Further testing needed.
- 24.04.23: Some significant efforts. Joystick shield works
- 23.04.23: Only problem is the joystick now ... only North/South work. Joystick is constantly triggering a signal (analogRead()?)
- 22.04.23: Unfortunately, my trials combining a joystick shield (Arduino form factor) with a ESP32 (Arduino form factor) had not been successful. If t will (ever) be, I will continue the thread.


## Preface
This is for building a wireless [Smart Hand Controller (wSHC)](https://onstep.groups.io/g/main/wiki/7152) for the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home) doing rapid prototyping method with

- ESP32 controller (different layouts will be supported over time
- Prototyping breakout boards (ESP32 30/38 pin, see media) with dupont connectors, clamps ... 
- Joystick shield with buttons (different versions)
- External or internal battery pack or external power (5V, 6-14V) - depending on used hardware (breakout board, ESP32 layout)

You need:
1. A working [OnStep with wireless functionality](https://onstep.groups.io/g/main/wiki) (no simulation mode possible - you will not get over the start screen in SHC)
2. Knowing how to configure the [Smart Hand Controller](https://onstep.groups.io/g/main/wiki/Smart-Hand-Controller) and the ability to program the ESP32 and upload it (Arduino IDE, Platform.io).
 
Many thanks to [Howard Dutton](http://www.stellarjourney.com/) which is the founder and lead developer of the [OnStep telescope controller](https://onstep.groups.io/g/main/wiki/Home). He did the main work on altering the source code so that things are working with the joystick shield (which they did not in the first place).

*Annotation*: **this is not the documentation for an SHC implementation**. This project only gives you reference designs among many others and a combination of hardware that is tested and works, a 3d model to print and some hints about getting things done. 

## Further reading on Onstep.groups.io

I never had a SHC because I did not want to build it. I already did this with OnStep and every half a year a new vervsion, PCB came out and there had been many problems. Therefore I built my OnStep with given hardware (Engraver boards). So I thought about the same for a SHC and everything started with the OnStep chat topic: "[wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440)". I had laying around some ESP32 and a joystick board with buttons. When I found out, that the SHC is simply that, I liked the idea for prototyping or even more. I did not order a PCB, extra parts or doing welding at the weekend just to get started with an wSHC when the list of components seem to be so simple. This lead to this project.

CS [Axel](https://avvp.de/portfolio-view/axel-pospischil)

## Purpose

Be able to rapidly build a wireless Smart Hand Controller with common standard parts and a oystick shield: 

- Build to use with **button / joystick shield**
- Build a **wireles** SHC - no ST4 or cable
- Build it **fast** (simply put things together)
- Build it **cheap** 
- Use s**tandard components**. You should get every part within days in your country or your local hardware store
- No long waiting China-imports necessary in the first place just to get started
- **No welding** required (dupont connector, probably using a crimp tool if you like special cable length)
- **No PCB** necessary
- Battery (for now) not included - use with a small, external battery pack

The intended usage is prototyping, testing. But it also meets the requirements to use it in the field as a full featured and robust wSHC.

The model is bulky, because of the use of standard breakout boards and shields. There exist others which use PCB's. This project gives you the time to do a more sophisticated wSHC without having one in the meantime :-)

### What you need
It depends on the reference design (version) of the "bulky wSHC" you like to build.

But it boils down to:

1. Access to a 3D printer with PLA (or other materials which can be fine printed) or you have another housing which you can use.
2. [A standard ESP32 with 30 or 38 pins](media/ESP32_30pin_left_layout_comparison.jpg) best with USB-C jack
3. [A breakout board for the ESP32](media/ESP32-30pin-BO1-ESP32_compact_breakout_and%20ESP32.jpg) with USB-C (V) and a standard 5/2.1 mm jack (4.5 to 16V) - other breakout boards might fit. But these are very common. 
4. A Arduino form factor Joystick shield
5. An OLED 1,3, (1,54 or 2,4 not tested) inch screen (I use a white colored one and put a red foil on it for the night)
6. 10-15 cm long Dupont cables (female 2 female for breakout board 1). Or use a crimp toolset and cables to make your own length (which is better). You can save a lot of time, if you buy preconfigured dupont cables (2,4,5 bundled). If you use headers, that include a whole row of pins, this is more robust and also will lead to less misconfiguration.
7. A standard USB powerbank, battery pack or for the breakout board no. 1 an 6,5 to 16V DC input (standard 5/2.1 mm jack) - until now there is no much space for a battery.  
8. A matching USB-cable for programming and loading the ESP32 / Board (USB-C, Micro-USB, Mini-USB)

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
| Cables | All (opt.) | **Crimpset**, this is a good investment for many projects | 30-50 € |
| Battery Pack | All | Power supply, 5V powerbank (USB-C/Micro-USB), 5mm/2.1mm jack (6 to 14,5 V) | depends if you have to buy or can reuse  |

**Reference design 01 (V01)**

| Part            | Version | Notes                                                                             | Cost  |
|-----------------|---------|-----------------------------------------------------------------------------------|-------|
| ESP32           | V01     | 30pin                                                                             | 5-7 € |
| Breakout board  | V01     | for ESP32/30pin Arduino form factor                                               | 5 €   |
| Joystick shield | V01     | ITEAD (seems to be not avaiable very easy). Very slim design. Arduino form factor | 5 €   |
| OLED            | V01     | 1,3 inch                                                                          | 5 €   |
| OLED            | V01     | 2,4 inch                                                                          | 15 €   |
| Filament        | V01     | PLA                                                                               | 2-3 € |
| Cables          | V01     | 10 to 15 cm long (female to female)                                           | Cents |

### Build Time

#### Preparation

3d printing parts
- Fine print (highly recommended): 7-8 hour print (PLA, Prusa MKS3 Quality 0.2mm, 15% infill, only some support)+ 45 minutes for caps
- Draft print (NOT recommended): 4 hour print (PLA, Prusa MKS3 Draft 0.3mm, 20% infill, only some support) + 30 minutes for caps

Cables
- You can save a lot of time, when you use preconfigured cables with Dupont connectors (2 / 4 / 5 in a row). E.g. crimping takes the most of time.
- Crimping is way more better than welding

#### Classroom project

If you already implemented an OnStep controller with people of you astronomy club, it is very easy now to get everything running with a wireless SHC. You will be surprised how much more intuitive this is, than using the handy app.

If you are well prepared (get cables ready, print parts) you will make this in a 3 hour workshop. Included a pause, 30min intro and 30 minutes for asking questions. 

You can save really a lot of money if you order the parts in China (takes usually 2 weeks shipping).


### More to come

- More versions to come (OLED sizes, breakout boards, 30/38 pin layout of ESP32, battery pack,).


## Reference designs
Any ESP32 and joystick board should work. For real world usage, there should be no bulky things on the top of the board! Probably you have to cut off the pins and headers. 
Within the folder structure in this repository you will find the different versions (hardware, configuration and 3d model).

## Feature list

- 3D Model [finalize 3d model for V01]([https://github.com/apos/rapid-bulky-wshc-by-apos/issues/2](https://github.com/apos/rapid-bulky-wshc-by-apos/issues/1))
- Configure.h tested: main branch (https://github.com/hjd1964/SmartHandController/commits/main)
- 128x64 OLED 1,3 inch (OLED 2,42 inch to come when code is implemented)
- External battery pack or power needed (USB-C / DC 5/2.1mm jack) 

## Hardware components overview
This is the most compact combination of hardware I could find out there:

- [ESP32 30pin](https://de.aliexpress.com/item/1005004702430375.html) or ESP32 38pin (with [special breakout board for the 38pin](3d/V01/Breakout_board_2_with_clambs_and_38pin.jpg) )
- [Breakout board 1](https://de.aliexpress.com/item/1005004786802668.html) - very slim, pins on top (which is what you want). You can use others, probably there will be other 3D models in the future. This has an Arduino form factor and simply is the best I could found. 
- Breakout board 2 has clamps and is for 38pin ESP32.
- ITEAD joystick or other Joystick shield. 
- OLED 1,3'' 
- OLED 2,42'' to come, need software fix from OnStep project
- Optional, but recommended for usage in the field: two M3 23mm length (not necessary, because 3d parts should snap together)

### ESP32
There are a lot of form factors for ESP32 out there (see [here](https://de.aliexpress.com/item/4000071762309.html)):
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/0b445027-35b6-4f70-a5e7-312254f347cd" width=300> 

Every ESP32 will do, but we have some constraints depending on the breakout board you will use. Especially, if you consider to use the ESPDuino-32 form factor, be aware, that you have to solder extra pins onto the board, since not all necassary pins will be there. 

### Breakout board
#### 30pin breakout board with DC converter for the 30pin ESP32 (RECOMMENDED)
This board has many advantages:
- USB-C jack located at the left (and also a Micro-USB Jack in the middle, if you might need one)
- separate round 5/2.1mm DC jack (6.5 to 16 V)
- small form factor
- separate 3,3V and 5V voltage pins
- easy to reach Dupont jacks on the top
 
![grafik](https://user-images.githubusercontent.com/456034/234828495-9fc7945a-443b-43dd-a11a-569b4a9bc3a1.png)</br>
<img src="media/rapid_bulky_wSHC_V01_BOM_a_ESP32_stacked_on_Board.jpg" width=300> 

#### 38pin breakout board with DC converter for a 38pin (!) ESP32
Work in Progress - but should simply work. Same features as the board above. Might be a solution for the ESP32 38 pin versions which come with the JST 2.0 port for a battery.

These types of breakout boards I only found on Ebay and in China.

<img src="https://user-images.githubusercontent.com/456034/235622255-b6c8133e-9775-4d4a-99c9-511349215d4e.png" width="300">

#### 30 or 38pin breakout board with clamps
You can use this for prototyping or for getting almost any ESP32 to run (depends on the width!). You can also add a simple battery loading circuit.
This board is simply different
- is a little bigger
- has clamps instead of Dupont jacks (might be also an advantage)
- has no voltage surgery - so you have so use directly the ESP32 USB jack (I do not recommend this for production usage)

<img src="media/Breakout_board_2_with_clambs_and_38pin.jpg" width="300"> <img src="media/ESP32_ITEAD_01.jpg" width="300"> 

### Joystick shield
#### Joystick shield 1 -  very short, Arduino form factor (RECOMMENDED)
This design uses an ITEAD joystick shield and pinmapping - see [ITEAD PDF manual](media/manuals/ITEAD_Joystickshield_DS.pdf) in the the media folder. Unfortunately these Joystick boards seem not to be produced any more. V02 will use another shield. </br>
 <img src="https://user-images.githubusercontent.com/456034/234848548-31534d51-8aed-4dec-b4e7-3f7b9aa3a3b2.png" width=300> <img src="media/ITEAD_Shield_pinmap_ESP32_01.png" width="300"> 
 
It look like so</br>
<img src="media/V01a_Reference_layout.jpg" width="300"> <img src="media/V01_M1_03.png" width="300"> <img src="media/V01_M1_02.png" width="300">

#### Joystick shield 2 - bigger, but very common shield
This is work in progress (see issues). Have to wait until hardware arrives.

<img src="https://user-images.githubusercontent.com/456034/235507702-e9caf042-37f5-4a0d-b1dc-3c391b947a72.png" width=300> <img src="https://user-images.githubusercontent.com/456034/235507799-ee5bc953-b546-453b-89fb-c334ee9c8903.png" width=300></br>

<img src="https://user-images.githubusercontent.com/456034/235509540-501aeed6-e818-4940-9b7d-6174cb2bc91f.png" width=300> <img src="https://user-images.githubusercontent.com/456034/235510275-84a1a18c-374a-4f09-a9df-a84ffa4dace0.png" width=300>
 
### OLED
Please consider wleding **right angled pins** (7pin header or 4  header) onto the board (facing inwards) which could give you more space e. g. later on for a battery pack. The even ones delivered with them are not very good for the building into the housing. 
 
Use the correct 3d model  (2,4) for the OLD housing.</br>
<img src="https://user-images.githubusercontent.com/456034/235375646-2a392b96-23dd-4ae4-afb2-1ef1a50baf26.png" width=300> <img src="https://user-images.githubusercontent.com/456034/235221460-2df23ae3-cc37-4036-960e-92521f07b0b4.png" width="300">

Use I2C OLEDs (not SPI, you have to convert them by soldering).

#### 1,3 inch OLED
Please consider welding right angled pins (4pin header) onto the board (facing inwards) which could give you more space e. g. later on for a battery pack. 
Use the correct 3d model  (1,3) for the OLD housing.</br>
<img src="https://user-images.githubusercontent.com/456034/234855272-b8b3f6c1-4e9e-45da-81e8-0ee3521e33b8.png" width=300> <img src="media/V01_M1_01.png" width="300"> 

#### 1,54 inch OLED
Type SSD1306

4 pin models (I2C) are not easy to get and expensive. 7 pins are SPI - see 2,42 inch OLED. 
Until now I do not own one ... so can not test it. Therefore no 3d model at the time of writing. Please contribute, if you like and file an issue with the solution here in GitHub. 

#### 2,4 inch OLED I2C (RECOMMENDED)
Type SSD1309

Important notice: there are  SPI (7 pin) and I2C (4 pin) models out there -  [be very careful, which version to choose (e. g. here von Ali)](https://de.aliexpress.com/item/1005004106570899.html). 
- You should buy the I2C Version (4 pin). This is less trouble free for the given use case. 
- If you got an SPI version you haver to move very little resistors like described in the manufacors manual. I can recommend this video: https://www.youtube.com/watch?v=6wR_OBNOr7I  (Converting an SPI OLED to i2c 2.42in. DIYmore SSD1309). The video shows very detailed how to convert the diymore.cc-branded OLED from SPI to IIC. For all new buyers, I recommend getting the 4 pin version (I2C) as stated above, if you do not need SPI. 

I have tested and successfully converted two DIYmore SSD1309 from SPI to I2C:

<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/f40aa843-4d77-4122-a652-8733c27c3577" width="300">
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/7d95fb10-40c8-4a5d-bf65-d5e6d9cb1364" width="300">  </br>
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/452da837-e6f1-48d0-9b35-68108625c537" width="300">
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/8304bbac-4dd4-4982-a72d-4c52d0a87a81" width="300">

##### Conversion steps (soldering of very tiny smd parts required - see video linked above):
1. shorted R5 and R7 with a little piece of cable
2. moved R4 to position R3 (R4 will be left open)
3. IMPORTANT: you have to use pin16 for reset (default in SHC code), otherwise the display will keep blank

<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/a29b4ff4-2a04-49a0-ae96-2484e7f5ab29" width="400">

## Model for 3D printer
The models are more or less versatile. 

- All OLED housings can be used and interchanged within all bases.. 
- Base and middle plate are different in size  (length) due to the design of the used Joystick shield. 
- Probably you also will solder your own PCB using standard parts (Joystick / Buttons) or combine avaiable joy sticks, push buttons with pin headers or a touch switch. Therefore there exit closed tops for your design which you can bore for you joystick/button design. Or simply take the STL/3MF and alter it to your needs.
- For every case I use the available breakout boards. 
- Battery pack: space is very limited in the smal housing (V01). But a small battery (800 mAh lithium) could fit.

### V01
The smallest RPB wSHC housing. Used for the smaller ITEAD joystick shield which is very small. Has also a "closed" top for your own design.

### V02
Used for the bigger Joystick "Arduino" Joystick shields which are a little bigger (87mm long instead of 70mm). Also the base is bigger, which gives space for a lithium battery pack.  Has also a "closed" top for your own design.

### V03 
Work in progress to use with avaiable Joysticks and buttons with Dupont connectors. 

### Other Versions: please contribute you Ideas 
Please contribute at the tread [wSHC (wireless Smart Hand Controller) with standard ESP32-Board and standard joystick shield (anyone?)](https://onstep.groups.io/g/main/message/51440).

#### Supply case version from Matthias
> The case is finished and it works. I glued the red ring on as a "design extra". The case is an old power supply case, which I still had left over.

He also used an old handy accu an integrated a loading circuit. After the prototyping phase he soldered everything. Good idea! See https://onstep.groups.io/g/main/message/51556 

<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/886b92aa-355f-4a0c-bfe2-5082154bb5c5" width=300)>
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/6f007e68-1056-41ed-ba8c-a45189aea038" width=300)>
<img src="https://github.com/apos/rapid-bulky-wshc-by-apos/assets/456034/6ede2306-9b15-4c2d-937b-7c00678dc38a" width=600)>

## Instructions

Basically  orient yourself on the pinmap of the SHC code for ESP32 and you read the look at the wirering plan in the media directory for the ITEAD joystick shield.

### Dragons ahead

- THERE ARE DIFFERENCES IN HARDWARE SPECs for all of these parts out there.
- THIS DESIGN IS FOR AN ESP32 (30/38pin), an ARDUINO FORM FACTOR BREAKOUT BOARD AND an ARDUINO FORM FACTOR JOYSTICK SHIELD. 
- You can also use your own housing. But if you stay with these 3d designs, you should stack with the hardware mentioned here. So PLEASE LOOK AT THE MEDIA DIRECTORY and here on this page for the hardware, that is used.

Everything will be reusable for a other projects and can be put apart totally. Nothing is soldered. 

Basically you can do this now with every ESP32 and Joystick board, BUT: you should know what you are doing and the 3D model probably will not fit. 


### Source code

Dealing with the source code is not easy, especially if you are new to OnStep, to ESP32 development, or to the Arduino IDE.

1. You need to read carefully the main SHC instructions [howto install the software on the OnStep site -> right side -> Smart Hand Controller](https://onstep.groups.io/g/main/wiki).
2. At time of writing you have to use the [main tree of the SHC software code](https://github.com/hjd1964/SmartHandController/tree/main) to get things running as stated in the [instructions](https://onstep.groups.io/g/main/wiki/7152). This and only this branch contains the necessary code to get things running 
3. You need to add special configuration code to your **Config.h** (section `// KEYPAD`) to get things running. Especially the joystick probably needs fine tuning (hysteresis) and the buttons debounce settings. Probably you need to alter the Joysticks direction (`#define X_PIN#_ACTIVE...`). You can find my Config.h in the config directory within this repository.
- The additional Config.h settings do not exist per default, when you checkout the code. You have to add dem manually. 
- Again: probably it is wise to have a look into the starter [thread on OnStep chat](https://onstep.groups.io/g/main/message/51440) like mentioned above.

This is work in progress, here and in the OnStep SHC source code (tree main). Until now it is limited to special hardware.

### Program ESP32 - Platform.io
I use the Visual Studio code plugin for [platform.io](https://platform.io). Arduino IDE is enough though (and the new 2.0 version works perfectly).

If you work with Platform.io you need:

- special platformio.ini (see platfoioio directory)
- rename SmartHandController.ino to SmartHandController.cpp (not any more for recent PlatformIO versions.
- know how to use platform.io (I can and will not give support on this)

BE AWARE: sometimes you have to press the "Download" button on the ESP32 to upload the code. You also need the correct driver depending on the chipset beeing used. Normally the USB-C variants are newer and have no problems.


# 3D-printer model and parts

You find all 3d files for Fusion360 and the 3MF/STL in the **directory "3d" in this repository**. Each one is for a certain version. These files are work in progress. I design with Fusion360 and will update the files after every major milestone.

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
- Joystick "ring" and OLED housing back will be **glued** to it's corresponding parts with fast glue.

<img src="https://user-images.githubusercontent.com/456034/235313742-7612246b-d6f1-4d65-85ea-54cbd08101e5.png" width=600)>
<img src="https://user-images.githubusercontent.com/456034/235313683-2c1f889e-322b-4c5f-954b-10d8d4716f2d.png" width=600)>
<img src="https://user-images.githubusercontent.com/456034/235454776-822d352d-f794-409d-a437-9fbf59f90613.png" width=400)>

## Optional print parts

### Pin inlets for different breakout boards

<img src="https://user-images.githubusercontent.com/456034/235374068-1c4095e5-8a76-4a6b-936f-ebfbac6e5727.png" width=300)> <img src="https://user-images.githubusercontent.com/456034/235374104-3a3f60e3-cac8-4a01-b0a7-2a11efa4b041.png" width=300)>

## Universal hold

<img src="https://user-images.githubusercontent.com/456034/235374162-c17552ee-3c6d-4e89-8cd4-15bb31e66315.png" width=300)> <img src="https://user-images.githubusercontent.com/456034/235374536-68dae3de-8cd0-46fc-97bb-448ac7e999ce.png" width=300)>

## Straps
Put a strong nylon cable into the two holes at the back of the base. You can simply break through the holes with a screw driver. 4mm diameter is default, but you can easily make the bore narrower or bigger.

<img src="https://user-images.githubusercontent.com/456034/235374283-9e5f7264-5594-44c1-a8f3-87ec31bd8614.png" width=300)>
