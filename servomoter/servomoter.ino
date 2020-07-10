// 2020/07/10 서보모터 실습 0~180도 까지 원하는 각도로 회전할 수 있다.
#include <Servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<120;++i){ // 1초에 1도씩 움직인다.
    myservo.write(i);
    delay(15);
  }
  myservo.write(0);// 120도 까지 돌아가면 다시 0도로 돌아감 
  delay(1000);
}
