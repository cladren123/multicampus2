#include <Servo.h>
Servo myServo;

int push_btn1 = 12; // + 용
int btn_state1 = 0; // 버튼이 눌려졌는지 판단하기 위한 상태값

int push_btn2 = 10; // - 용 
int btn_state2 = 0;

int angle = 0; // 서브모터에 세팅할 각도

void setup() {
  Serial.begin(9600);
  
  myServo.attach(6); // 6은 핀 번호

  pinMode(push_btn1, INPUT);
  pinMode(push_btn2, INPUT);

}

void loop() {
  btn_state1 = digitalRead(push_btn1);
  btn_state2 = digitalRead(push_btn2);

  

  if(btn_state1 == LOW)
  {
    angle = angle + 20;
    if(angle > 180)
    {
      angle = 180;
      }
    Serial.println("+버튼 : " + (String)angle);
    myServo.write(angle);
    delay(100);
    }

   if(btn_state2 == LOW)
  {
    angle = angle - 20;
    if(angle < 0)
    {
      angle = 0;
      }
    myServo.write(angle);
    Serial.println("+버튼 : " + (String)angle);
    delay(100);
    }

  
 

}
