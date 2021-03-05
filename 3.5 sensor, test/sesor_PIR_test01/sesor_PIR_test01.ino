void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);

}

void loop() {
  int value = digitalRead(7);
  Serial.println(value);


  if(value == 1)
  {
    digitalWrite(LED_BUILTIN, HIGH);   
    }
  else if(value == 0)
  {
    digitalWrite(LED_BUILTIN, LOW);    
    }
  delay(1000);
}
