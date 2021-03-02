void setup() {
  Serial.begin(9600);

}

void loop() {
  delay(1000);
  if(Serial.available() > 1)
  { //test를 입력한다면
    //char data = Serial.read(); // 첫 바이트만 읽기 때문에 t만 출력한다.
    //Serial.println(data);
    //String을 읽어서 리턴
    //String stringdata = Serial.readString();

    String stringdata = Serial.readStringUntil("\n");
    
    Serial.println(stringdata);

    if(stringdata == "end")
    {
      Serial.println("Ok");
      }
      else
      {
        Serial.println("Fail");
        }
    }
 

}
