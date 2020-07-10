// 2020/07/10 서보모터 실습3  가변저항으로 서보모터 조절해보기 
#include <Servo.h>
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rad = map(analogRead(A0),0,1023,0,120);// 저항을 각도로 변환 
  myservo.write(rad);// 120도 까지 돌아가면 다시 0도로 돌아감 
  delay(15);
}
