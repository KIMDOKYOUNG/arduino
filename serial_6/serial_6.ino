//예제 6 주위 밝기에 따라 led가 켜지는 빛 감지기 만들기  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// 시리얼 통신 속도 설정하기, 시리얼 모니터와 맞춰야 된다.
  // 아두이노 보드와 pc가 시리얼 모니터를 통해 통신할 수 있도록 보드레이트 값을 동일하게 설정해야 통신을 할 수 있다.
  pinMode(10,INPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char pr[12];
  sprintf(pr,"Light = %d", analogRead(A0));
  Serial.println(pr);// 시리얼 모니터에 한 줄 씩 출력하는 것 
  delay(200);

  int light = analogRead(A0);
  // digitalRead(9) == HIGH
  if(light> 600 ){ // 600보다 밝으면 꺼지고 
    digitalWrite(12,0);
    delay(1000);
  } else{// 600보다 어두우면 켜진다.
    digitalWrite(12,1);
    delay(1000);
    
//    int ledLight1 = map(light,300,1000,255,0);// 어두울 때 제일 밝게, 밝을 때 제일 어둡게
//    int ledLight2 = map(light,300,1000,0,255);// 어두울 때 제일 어둡게, 밝을 때 제일 밝게
//    analogWrite(9,ledLight1);// 아날로그 신호 주기
//    analogWrite(10,ledLight2);// 아날로그 신호 주기

  }
}
