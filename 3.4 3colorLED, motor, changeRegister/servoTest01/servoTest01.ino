#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(6);

}

void loop() {
  for(int i = 0; i<=180; i++)
  {
    myServo.write(i);
    delay(100);
    }

  
 //myServo.write(0);
// myServo.write(90);
 //delay(100);

}
