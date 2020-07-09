//예제 1 조도센서 이용하기 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// 시리얼 통신 속도 설정하기, 시리얼 모니터와 맞춰야 된다.
  // 아두이노 보드와 pc가 시리얼 모니터를 통해 통신할 수 있도록 보드레이트 값을 동일하게 설정해야 통신을 할 수 있다.
}

void loop() {
  // put your main code here, to run repeatedly:
  char pr[12];
  sprintf(pr,"Light = %d", analogRead(A0));
  Serial.println(pr);// 시리얼 모니터에 한 줄 씩 출력하는 것 
  delay(200);

}
