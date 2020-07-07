// 반딧불이 led 만들기 analog 신호여서 pinmode 안 만들어 줘도 된다.
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <256;i++){
    analogWrite(9,i);
    analogWrite(10,i);
    delay(10);
  }
  for(int i = 255; i > -1;i--){
    analogWrite(9,i);
    analogWrite(10,i);
    delay(10);
  }
}
