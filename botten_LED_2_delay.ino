void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(8);// 8핀으로 입력받는 값을 저장한다.
  if(value == HIGH){
    digitalWrite(13,HIGH);// 8핀이 눌리면 5V 전기가 들어온다.
    digitalWrite(12,HIGH);
    delay(3000);
  } else{
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
  }
}
