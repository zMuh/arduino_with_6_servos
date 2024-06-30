// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int pos = 0;

const int nServos = 6;

Servo servos[nServos];

const int servoPin[nServos] = {8,9,10,11,12,13};

void setup()
{
  for(int i=0;i<nServos; i++){
  	servos[i].attach(servoPin[i]);
    servos[i].write(0);
  }
}

void loop() {
  for (int s=0; s<nServos; s++){
  for (pos = 0; pos <= 180; pos += 1) { 
    servos[s].write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    servos[s].write(pos);              
    delay(15);                       
  }

  }
}
