QWERTY_remap
============

A fork of dvorany for both Colemak and Dvorak layout.
Original source code: https://github.com/leocadiotine/Dvorany
Thanks for leocadiotine!

Since I am new to both Git and Arduino, I don't know how to fork github project, please forgie me.

This code works for Arduino UNO and Sparkfun USB Host Shield.

This Arduino project is to convert ordinary QWERTY keyboard to Colemak/Dvorak output.
You can now have a hardware Colemak/Dvorak keyboard.
If you have mechanical keyboard with blank keycaps, it should be fun! :)

How to use
============

1. Open "QWERTY_remap.ino" and search for "define LAYOUT 1", change the number as you want, 1: Colemak (by default), 2: Dvorak
You can add your own layout by creating a new .ino file in the same folder (see colemak.ino or dvorak.ino for your reference), after that, remember to assign a number for your LAYOUT.
2. Save and upload your code to your Arduino UNO
3. Update the firmware using this [tutorial](http://arduino.cc/en/Hacking/DFUProgramming8U2), all the firmwares are located in "Arduino_UNO_firmware" folder
4. To change your code, reset your UNO with USB serial firmware
5. You have to plug the Arduino board in first and then the USB keyboard later, otherwise it won't work

Future features
========
1. Reduce time lag for recognizing the keyboard
2. Allow user to define key for switching layouts