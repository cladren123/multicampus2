#include <Servo.h>

int pushButton = 12;
int buttonState = 0;

int moveSensor = 13;
int moveValue = 0;

int doorState = 0; // 0이면 자동, 1이면 수동
int doorOpenState = 0; // 0이면 닫혀있는 상태, 1이면 열려있는 상태

Servo myServo;

void setup() {
  Serial.begin(9600);
  
  pinMode(pushButton, INPUT);

  pinMode(moveSensor, INPUT);

  myServo.attach(7);
  

}

void loop() {
  
  buttonState = digitalRead(pushButton);
  //Serial.println(buttonState);

  // 자동으로 센서가 감지해 출입물을 열고, 닫음.
  if(doorState == 0)
  {
     moveValue = digitalRead(moveSensor);
      if(moveValue == 1)
      {
        Serial.println("움직임 감지, 출입문이 열립니다.");
        myServo.write(90);
        doorOpenState = 1;
        }
      else
      {
        Serial.println("아무 일 없음, 출입문이 닫힙니다.");
        myServo.write(0);
        doorOpenState = 0;
        }
    }

   
    // 수동으로 전환되면 버튼을 누름에 따라 출입문이 열고 닫힘.
    if(doorState == 1)
    {
      if(buttonState == 1 && doorOpenState == 0)
      {
        myServo.write(90);
        Serial.println("출입문이 열립니다.");
        doorOpenState = 1;
        }
      else if(buttonState == 1 && doorOpenState == 1)
      {
        myServo.write(0);
        Serial.println("출입문이 닫힙니다.");
        doorOpenState = 0;
        }
      }
 
   // 처음 버튼을 누르면 수동으로 전환되면서 출입문이 열림.
   if(buttonState == 1 && doorState == 0)
    {
      doorState = 1;
      Serial.println("수동으로 전환합니다. 출입문이 열립니다.");
      myServo.write(90);
      doorOpenState = 1;
      }
      



  delay(1000);

}
