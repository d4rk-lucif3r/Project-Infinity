# Project-Infinity
![Google Phone](https://img.shields.io/badge/Android-Lollipop+-blue.svg?logo=google&longCache=true&style=flat-square)
- Project Infinity is a mind controlled rover which is controlled by Neurosky Mindwave Headset with the help of an app(link to my repo) which is made using arduino



## Required Materials
1) BreadBoard - Half Size
2) Arduino Uno
3) Hobby Motor - Gear
4) 1K Ohm Resistor
5) 9v Battery
6) USB Cable A to B
7) Jumper Wires Pack - M/M
8) Jumper Wires Pack - M/F
9) Neurosky Mindwave 2 Headset
## Code
- The code can be found as [Infinity.ino](https://github.com/arshanwar/Project-Infinity/blob/master/Code/Infinity.ino)
## Library Required
- [Motor Shield Library](https://github.com/arshanwar/Project-Infinity/tree/master/Motor%20Shield%20LIbrary)
## Schematics
![Schematics Image](https://github.com/arshanwar/Project-Infinity/blob/master/Schematics.png)
## Headset Diagram
![Headset-diagram](https://drive.google.com/file/d/11R9qH499viF02Bejd2zksB_jDOIO_Nuz/view?usp=sharing)
## Working
- Meditation produces alpha waves (frequency range: 7.5-12.5 Hz)
- Attention produces beta waves (frequency range: 12.5-30 Hz)
- So by isolating these 2 frequencies in brainwaves, App can trigger the right signals to control the rover.
- The EEG headset records the brainwaves.
- The brainwaves are analyzed on the app to isolate the right frequencies.
- The app is connected to an Arduino microcontroller via Bluetooth. The Arduino gets a specific input for each frequency detected.
- Through those inputs it changes its direction
## Contributors
- [@ksdhanjal](https://github.com/ksdhanjal) for the app.
