#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

#include <Adafruit_GFX.h> // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>
#include <Wire.h>

// defines pins numbers for HC-SR04
const int trigPin = 4; 
const int echoPin = 5; 

// defines pins numbers for LCD
#define TFT_CS 10
#define TFT_RST 9 // you can also connect this to the Arduino reset
                  // in which case, set this #define pin to -1!
#define TFT_DC 8

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST); //LCD object
Adafruit_BNO055 bno = Adafruit_BNO055(55); //sensor object

long duration; // defines variables
int distance; // for duration and disatance
int nowDistance = 0;

void setup() { 
tft.initR(INITR_144GREENTAB);
tft.fillScreen(ST77XX_BLACK);
delay(2000);

pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input

Serial.begin(9600); // Starts the serial communication 
Serial.println("Orientation Sensor Test"); Serial.println("");

/* Initialise the sensor */
if(!bno.begin())
{
 /* There was a problem detecting the BNO055 ... check your connections */
 Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
 while(1);
}
delay(1000);
 
bno.setExtCrystalUse(true);  
}

void loop() { 
/* Get a new sensor event */
sensors_event_t event; 
bno.getEvent(&event);

// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

delay(500);

HCSR04(); //function for data from ultrasonic sensor (distance)

// EULER VECTOR
imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
 
/* Display the floating point data */
tft.setTextColor(ST7735_GREEN);
tft.setCursor(0,0); //location of text
tft.print("X: ");
tft.print(euler.x());

tft.setCursor(0,10); 
tft.print(" Y: "); 
tft.print(euler.y()); 

tft.setCursor(0,20);
tft.print(" Z: ");
tft.print(euler.z()); 
tft.println("");

// the line for the artificial horizon divided by 2, because euler angle is 360' and screen has 128 pixel, so the change is the same
tft.height()/2 + euler.y()/2, ST7735_GREEN); 

// tan(euler.x()/5 this is for minimizing oscilations
// the line from central pixel to the right end of the screen
tft.drawLine(tft.width()/2, tft.height()/2 + euler.y()/2, tft.width(),tft.height()/2 + euler.y()/2 + (tan(euler.x()/5)*(tft.width()/2)/8),ST7735_GREEN);

// the line from left end of the screen to the central pixel
tft.drawLine(1, tft.height()/2 + euler.y()/2 -(tan(euler.x()/5)*(tft.width()/2))/8 , tft.width()/2, tft.height()/2 +euler.y()/2, ST7735_GREEN) ;  

pointer(); // Function for drawing pointer in the middle

// The sensor results were overlapping, so there is function tft.fillScreen
// and delay one second, which may not be the best solution for MCU, but
// it is working
delay(1000);
tft.fillScreen(ST7735_BLACK);
}

void pointer (){
tft.drawLine(tft.width()/2 - 10 , tft.height()/2 , tft.width()/2 - 5 ,tft.height()/2 , ST77XX_RED);
tft.drawLine(tft.width()/2 , tft.height()/2 - 10 , tft.width()/2 ,tft.height()/2 - 5 , ST77XX_RED);
tft.drawLine(tft.width()/2 + 10 , tft.height()/2 , tft.width()/2 + 5 ,tft.height()/2 , ST77XX_RED);
tft.drawLine(tft.width()/2 , tft.height()/2 + 10 , tft.width()/2 ,tft.height()/2 + 5 , ST77XX_RED);
}

// function for printing the results from ultrasonic sensor
void HCSR04 (){
tft.setTextColor(ST7735_GREEN);
tft.setCursor(0,120); //location of text
tft.print("Distance:");

// if object is detected at the distance less than 30 cm, text color will be red
if(distance < 30){
tft.setTextColor(ST7735_RED);
tft.print(distance);
}
else{
 tft.setTextColor(ST7735_GREEN);
 tft.print(distance);
}
tft.print("cm");
}
