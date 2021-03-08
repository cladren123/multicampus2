#include <SoftwareSerial.h>

#define rxPin 2
#define txPin 3

String mystr = "";

SoftwareSerial swSerial(rxPin, txPin); // (2,3)


// 블루투스에 전달되는 데이터(안드로이드폰)를 시리얼모니터에 출력


void setup() {
  Serial.begin(9600);
  swSerial.begin(9600);
  Serial.println("ready.");

  pinMode(13, OUTPUT);
}

void loop() {
  delay(1000);

  while(swSerial.available())
  {
    char myChar = swSerial.read();
    mystr = mystr + myChar;
    }
/*
    if(mystr == "on") 
  {
    digitalWrite(13, 1);
    }
  else if(mystr == "off") 
  {
    digitalWrite(13, 0);
    }
    */

   if(mystr.equals("on"))
  {
      digitalWrite(13, 1);
      }
  else if(mystr.equals("off"))
   {
      digitalWrite(13, 0);
      }
 
  // 문자나 객체를 비교할 때는 equals() 를 사용한다.
  if(!mystr.equals(""))
  {
    Serial.println("input data : " +mystr);
    }
  mystr = ""; // mystr을 초기화


  



  
  
  
}
