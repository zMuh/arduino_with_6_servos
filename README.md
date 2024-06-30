# Arduino with 6 servos

Connecting and using 6 servo motors on arduino 

[Tinkercad Link](https://www.tinkercad.com/things/bzWM7l1Ijo4-arduino-with-6-servos?sharecode=rFKPyOizvVnIbd3oedgNg-sDNtWgvN5mnepnYtgAaf0)
## Screenshots

![App Screenshot](https://i.imgur.com/Lq3gNAM.png)


## Code

```
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
```
