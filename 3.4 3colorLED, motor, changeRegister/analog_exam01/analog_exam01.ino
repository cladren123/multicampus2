void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  int inputVal = analogRead(A0);
  Serial.println(inputVal);
  analogWrite(11,inputVal/4);
}
