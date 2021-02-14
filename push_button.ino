#define button D1
#define led D4
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(button);
  digitalWrite(led,1);
  Serial.println(a);
  if (a == LOW){
    digitalWrite(led,0);
  }
  else{
    digitalWrite(led,1);
  }
}
