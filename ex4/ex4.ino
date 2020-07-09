// 반딧불이 불처럼 켜졌다 꺼졌다하는데 두 led 번갈아 가면서 키는 프로그램 
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <256;i++){
    analogWrite(9,i);
    delay(10);
  }
  for(int i = 0; i <256;i++){
    analogWrite(10,i);
    delay(10);
  }
  for(int i = 255; i > -1;i--){
    analogWrite(9,i);
    delay(10);
  }
  for(int i = 255; i > -1;i--){
    analogWrite(10,i);
    delay(10);
  }
 
}
