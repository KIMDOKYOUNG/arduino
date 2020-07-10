// 2020/07/10 서보모터 실습2  0~180도 까지 회전하면 led 켜기
#include <Servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(10,0);
  
  for(int i = 0; i<120;++i){ //  1도씩 움직인다.
    myservo.write(i);
    delay(15);
  }
  analogWrite(10,255);
  delay(1000);
  myservo.write(0);// 120도 까지 돌아가면 다시 0도로 돌아감 
  delay(1000);
}
