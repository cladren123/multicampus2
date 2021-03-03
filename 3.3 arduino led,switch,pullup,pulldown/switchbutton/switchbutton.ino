
int push_btn = 12;
int btn_state = 0;
int led_pin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(push_btn, INPUT);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  delay(1000);
  btn_state = digitalRead(push_btn);

  Serial.println(btn_state);

  if (btn_state == HIGH)
  {
    digitalWrite(led_pin, 1);
    }
   else
   {
    digitalWrite(led_pin, 0);
    }
}
