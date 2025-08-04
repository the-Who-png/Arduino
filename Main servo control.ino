#include <Servo.h>

Servo Mservo1;

void setup() {
  // put your setup code here, to run once:
   Mservo1.attach(9);
  Mservo1.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int angle = 0; angle < 180; angle ++)
  {
    Mservo1.write(angle);
   // Mservo2.write(angle);
    delay(15);

  }

for(int angle = 180; angle > 0; angle --)
  {
    Mservo1.write(angle);
   // Mservo2.write(angle);
    delay(15);

  }
  while(true);
}
