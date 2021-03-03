// 배열로 바꾸기



int time = 500;
int led_pin[5] = {9,10,11,12,13};


void setup() {
  
 
  for (int i=0; i<5; i++)
  {
     pinMode(led_pin[i], OUTPUT);
  }
}

//전원이 들어오는 동안 무한으로 반복해서 실행되는 코드
//실질적인 동작을 제어하는 코드가 정의
// the loop function runs over and over again forever
void loop() {
  for(int i = 4; i>=0 ; i--)
  {
    digitalWrite(led_pin[i], 1);   
    delay(time); 
  }

   for(int i = 0; i <5; i++)
  {
    digitalWrite(led_pin[i], LOW);   
    delay(time); 
  }
 

  
}
