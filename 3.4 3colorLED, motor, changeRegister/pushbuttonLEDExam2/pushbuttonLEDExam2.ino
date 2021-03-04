// 왼쪽 노란색 전구 쪽 회로가 pullup
// 오른쪽 빨간색 전구 쪽 회로가 pulldown 입니다.


int push_btn = 12;
int led_pin = 11;
int btn_state = 0;
int led_state = 0;


void setup() {
  Serial.begin(9600);
  pinMode(push_btn, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  delay(1000);
  
  btn_state = digitalRead(push_btn);

  Serial.println(btn_state);

  if(btn_state == HIGH) // push 버튼이 눌러져 있는 상태 
  {
    if(led_state == 0) // led가 꺼져있는 상태
    {
      led_state = 1;
      digitalWrite(led_pin,HIGH);
      Serial.println("led_on:" + (String)led_state);
      }
    else // led가 켜져있는 상태
    {
      led_state = 0;
      digitalWrite(led_pin,LOW);
      Serial.println("led_off:" + (String)led_state);
      }
    }

    delay(1000);

   





   
  
}
