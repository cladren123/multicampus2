int push_btn = 12;
int led_pin = 9; 
int btn_state = 0;


void setup() {
  pinMode(push_btn, INPUT);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  btn_state = digitalRead(push_btn);

  if(btn_state == HIGH)
  {
    digitalWrite(led_pin, HIGH);
    }
  else
  {
    digitalWrite(led_pin, LOW);
    }





 
}
