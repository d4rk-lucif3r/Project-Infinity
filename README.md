# Project-Infinity
![Google Phone](https://img.shields.io/badge/Android-Lollipop+-blue.svg?logo=google&longCache=true&style=flat-square)
- Project Infinity is a mind controlled rover which is made using arduino and is controlled by  Neurosky Mindwave Headset with the help of an [app](https://github.com/ksdhanjal/Project-Infinity).



## Required Materials
1) BreadBoard - Half Size
2) Arduino Uno R3
3) Hobby Motor - Geared
4) 1K Ohm Resistor
5) 9v Battery
6) USB Cable A to B
7) Jumper Wires Pack - M/M
8) Jumper Wires Pack - M/F
9) Neurosky Mindwave 2 Headset
## Code
- The code can be found [here](https://github.com/arshanwar/Project-Infinity/blob/master/Code/Infinity.ino).
## Library Required
- [This](https://github.com/arshanwar/Project-Infinity/tree/master/Motor%20Shield%20LIbrary) is the library for the Adafruit Motor Shield V2 for Arduino. It supports DC motors & Stepper motors with microstepping as well as stacking-support.
## Working Principle
- Brain waves are oscillating electrical voltages in the brain measuring just a few millionths of a volt. There are five widely recognized brain waves, and the main frequencies of human EEG waves are listed below along with their characteristics.
![EEG WAVES](https://github.com/arshanwar/Project-Infinity/blob/master/EEG%20waves.jpg)
## Working
- Meditation produces alpha waves (frequency range: 7.5-12.5 Hz).
- Attention produces beta waves (frequency range: 12.5-30 Hz).
- So by isolating these 2 frequencies in brainwaves, App can trigger the right signals to control the rover.
- The EEG headset records the brainwaves.
- The brainwaves are analyzed on the app to isolate the right frequencies.
- The app is connected to an Arduino microcontroller via Bluetooth. The Arduino gets a specific input for each frequency detected.
- Through those inputs it changes its direction.
## Schematics
![Schematics Image](https://github.com/arshanwar/Project-Infinity/blob/master/Schematics.png)
## Headset Diagram
![Headset-diagram](https://github.com/arshanwar/Project-Infinity/blob/master/Headset%20Diagram.jpg)
## Contributors
- [@ksdhanjal](https://github.com/ksdhanjal) for the [app](https://github.com/ksdhanjal/Project-Infinity).
- [@adafruit](https://github.com/adafruit) for Motor Shield Library.
