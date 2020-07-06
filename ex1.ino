int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH); //1
  delay(1000);
  digitalWrite(led,LOW); //0
  delay(1000);
}
