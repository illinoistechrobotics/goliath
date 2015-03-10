#include <Servo.h>
#define SPINNER_PIN 3

Servo spinner;

void setup()
{
  Serial.begin(9600);
  spinner.attach(SPINNER_PIN);
}

void loop()
{
  if(Serial.available()){
    char command = Serial.read();
    int usec = 0;
    switch(command){
    case '1':
      usec = 1200;
      break;
    case '2':
      usec = 1700;
      break;
    case '3':
      usec = 2200;
      break;
    }
    spinner.write_microseconds(usec);
  }
  delay(100);
}