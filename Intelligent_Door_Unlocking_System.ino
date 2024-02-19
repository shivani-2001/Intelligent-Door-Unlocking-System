#include <Servo.h> 
#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7) 
#include <IRremote.h>
int RECV_PIN = 8;

IRrecv irrecv(RECV_PIN);
decode_results results;

// Declare the Servo pin 
int servoPin = 3; 

int buttonState = 0;
int ledPin = 11;

// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;

// defines variables
long duration;
int distance;

// Create a servo object 
Servo Servo1; 
void setup() { 

  // We need to attach the servo to the used pin number 
  Servo1.attach(servoPin);
  Servo1.write(90);
  delay(1000);
  pinMode(ledPin, OUTPUT);
  pinMode(13, INPUT);
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  // Serial.begin(9600); // Starts the serial communication
  lcd.begin(16,2);
  irrecv.enableIRIn();
}

void loop(){ 
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
  distance = (duration * 0.034 / 2);
  
  lcd.clear(); // Clears the display 
  lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("Distance ");
  lcd.print(distance);
  
  // Make servo go to 0 degrees 
  if (distance <= 10 && distance >=2) {
    Servo1.write(90);
    analogWrite(ledPin, 80);
    lcd.setCursor(0,1);
    lcd.print("Door Unlocked..."); 
    delay(1000);
  }
  else if (irrecv.decode(&results) == 0xFF7A85) {
    Servo1.write(90);
    analogWrite(ledPin, 80);
    lcd.setCursor(0,1);
    lcd.print("Door Unlocked..."); 
    delay(1000);
  } 
  else {
    Servo1.write(0);
    digitalWrite(ledPin, LOW);
    lcd.clear();
    lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
     
  lcd.print("Distance ");
  lcd.print(distance);
  irrecv.resume();
    
  }
  
}