#include <Servo.h>

Servo Mservo1;
Servo Mservo2;


Servo Rservo1;
Servo Rservo2;


void setup() {
  // put your setup code here, to run once:

  Mservo1.attach(8);
  Mservo1.write(180);

  Mservo2.attach(9);
  Mservo2.write(0);

  Rservo1.attach(22);   //rotate servo(720 degree)

  Rservo2.attach(23);
  
}

void loop() {
  // put your main code here, to run repeatedly:

   Rservo1.write(110);
    Rservo2.write(87);
    delay(2000);

    Rservo1.write(90);
    Rservo2.write(90);
    

  for(int angle = 0; angle < 180; angle ++)
  {
    Mservo1.write(180-angle);
    Mservo2.write(angle);
    delay(15);

  }

  Rservo1.write(70);
    Rservo2.write(103);
    delay(2000);

    Rservo1.write(90);
    Rservo2.write(90);

for(int angle = 180; angle > 0; angle --)
  {
    Mservo1.write(180-angle);
    Mservo2.write(angle);
    delay(15);
  }

  while(true);
}
