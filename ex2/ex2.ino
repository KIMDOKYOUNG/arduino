int led1 = 8;
int led2 = 7;
int led3 = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, 1);
  delay(100);
  digitalWrite(led1, 0);
  delay(100);
  digitalWrite(led2, 1);
  delay(100);
  digitalWrite(led2, 0);
  delay(100);
  digitalWrite(led3, 1);
  delay(100);
  digitalWrite(led3, 0);
  delay(100);
  
  
}
