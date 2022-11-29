#include <HyperDisplay_SSD1309.h>
#include "HyperDisplay_UG2856KLBAG01.h"
 
#define SERIAL_PORT Serial
#define WIRE_PORT Wire // Used if USE_SPI == 0
#define SPI_PORT SPI // Used if USE_SPI == 1

#define RES_PIN 2 // Optional
#define CS_PIN 4 // Used only if USE_SPI == 1
#define DC_PIN 5 // Used only if USE_SPI == 1

#define USE_SPI 0 // Choose your interface. 0 = I2C, 1 = SPI

// Object Declaration. A class exists for each interface option
#if USE_SPI
UG2856KLBAG01_SPI myTOLED; // Declare a SPI-based Transparent OLED 
object called myTOLED
#else
UG2856KLBAG01_I2C myTOLED; // Declare a I2C-based Transparent OLED 
object called myTOLED
#endif /* USE_SPI */

#include <SPI.h>

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

Adafruit_BNO055 bno = Adafruit_BNO055(55);

// defines pins numbers for HC-SR04
const int trigPin = 12; //sets trig pin as 12
const int echoPin = 11; //sets echo pin as 11

long duration; // defines variables
int distance; // for duration and disatance

int nowDistance = 0;

void setup(){
Serial.begin(9600);

Serial.println("Orientation Sensor Test"); Serial.println("");

/* Initialise the sensor */
if(!bno.begin())
{
 /* There was a problem detecting the BNO055 ... check your connections */
Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C 
ADDR!");
while(1);
}

delay(1000);

bno.setExtCrystalUse(true); 

Serial.println(F("Example1_DisplayTest: Transparent Graphical OLED"));

#if USE_SPI 
SPI_PORT.begin();
myTOLED.begin(CS_PIN, DC_PIN, SPI_PORT); // Begin for SPI requires that you provide the CS and DC pin numbers

#else
WIRE_PORT.begin();
myTOLED.begin(WIRE_PORT, false, SSD1309_ARD_UNUSED_PIN); // Begin for I2C has default values for every argument

Wire.setClock(400000);
#endif /* USSE_SPI */

pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

void loop(){
//GUNPOINT AT THE CENTER OF THE SCREEN
 myTOLED.lineSet(55,32,60,32);
 myTOLED.lineSet(68,32,73,32);
 myTOLED.lineSet(64,36,64,41);
 myTOLED.lineSet(64,28,64,23);
 
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

HCSR04();

BNO055();

delay(2000);
myTOLED.clearDisplay();
}

void HCSR04(){ 
myTOLED.setTextCursor(0,0);
myTOLED.print("Distance:");
myTOLED.print(distance);
myTOLED.print("cm"); 
}

void BNO055(){
imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER); 

/* Display the floating point data */
myTOLED.setTextCursor(0,10);
myTOLED.print("X: ");
myTOLED.print(euler.x()); 

//myTOLED.setTextCursor(0,20);
myTOLED.print(" Y: "); 
myTOLED.print(euler.y());

myTOLED.setTextCursor(0,20);
myTOLED.print(" Z: ");
myTOLED.print(euler.z());
}
