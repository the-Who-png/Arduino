#include <Servo.h>

Servo Rservo1;
Servo Rservo2;

void setup() {
  Rservo1.attach(22);   //rotate servo(720 degree)

  Rservo2.attach(23);
}

void loop() {
  
    //Rservo1.write(101);
    //Rservo2.write(101);
    //delay(1750);         

  
    Rservo1.write(110);
    Rservo2.write(87);
    delay(2000);

  

    
    

//Rservo1.write(90);
//delay(1000);

    //Rservo1.write(80);
    //delay(1710);

    Rservo1.write(90);
    Rservo2.write(90);
    
  

while(true);

}
