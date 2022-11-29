# HUD DISPLAY

COMPONENTS : 
- Arduino nano
- Teensy 4.0
- Sparkfun 128x64 Transparent Graphical OLED breakout
- LCD screen 128 x 128
- BNO055 absolute orientation sensor
- HC-SR04 ultrasonic distance sensor

1. VERSION (ARDUINO NANO AND LCD DISPLAY)

Information about the distances of a certain object from the ultrasonic sensor are printed at the top of the screen
(Distance: ... cm). The absolute orientation sensor BNO055 displays the Euler vector (x,y,z axis), which is printed 
below the distance. Using the Euler vector, an artificial horizon was made.

![image](https://user-images.githubusercontent.com/119412710/204529040-2c2bc2bb-ae92-4182-afad-5c1f464e5053.png)
![image](https://user-images.githubusercontent.com/119412710/204529356-598d11b8-4061-47c9-8fd0-1c5fae1c1826.png)

2. VERSION (TEENSY AND OLED DISPLAY)

OLED display has a higher resolution than LCD, so i replaced it. Teensy was added because of memory. 
The transparent OLED screen displays the data quite well, the quality the image it displays is high. 
The picture on the OLED is much better, sharper and of better quality, and it can be used much better at
to create Head-up displays. It is also better at the night conditions

![image](https://user-images.githubusercontent.com/119412710/204530161-ab0f0e00-7f50-4ea1-980e-f821ae337d72.png)
![image](https://user-images.githubusercontent.com/119412710/204530187-dab1c613-c05a-40a2-8866-ac361ed8cf9a.png)
