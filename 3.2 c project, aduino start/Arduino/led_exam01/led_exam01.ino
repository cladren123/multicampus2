
//1이라는 숫자가 입력되면 13번 led에불이 켜지도록 설정, 1이 아니면 불이 꺼지도록 설정

int inputNum = 0;


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if(Serial.available() )
  {
    int serialInputdata = (int)Serial.read();
  
  
    if (serialInputdata == 49) // 1을 입력하면 49로 받는다.
    {
      digitalWrite(13, HIGH);   
      Serial.println(serialInputdata);
      }
    else
    {
      digitalWrite(13, LOW);    
      Serial.println(serialInputdata);
      }           
    }    
}
