
 int inputdata = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int indata =65;
  char chardata = 65;
  float floatdata =65;

  //Serial.println(indata);
  //Serial.println(chardata);
  //Serial.println(floatdata);
  //delay(1000);

  if(Serial.available() > 0) // 읽어들인 데이터가 있다면
  {
    // 한 바이트씩 읽는다. 
    inputdata = Serial.read();
    Serial.write(inputdata);
    Serial.print(",");
    Serial.println(inputdata);
    }
}
