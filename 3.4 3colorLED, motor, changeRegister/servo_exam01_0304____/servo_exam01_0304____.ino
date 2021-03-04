#include <Servo.h>

int pushButton1 = 12;
int buttonState1 = 0;

int pushButton2 = 10;
int buttonState2 = 0;

Servo myServo;
int moterState = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);

  myServo.attach(6);
}

void loop() {
 buttonState1 = digitalRead(pushButton1);
 buttonState2 = digitalRead(pushButton2);

 Serial.println(buttonState2);


 if(buttonState1 == 0)
 {
  moterState = moterState + 20;
  if(moterState > 180)
  {
    moterState = 180;
    }
  }

 if(buttonState2 == 0)
 {
  moterState = moterState - 20;
  if(moterState < 0)
  {
    moterState = 0;
    }
  }

 myServo.write(moterState);
 delay(1000);


}
