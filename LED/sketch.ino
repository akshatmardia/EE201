// https://wokwi.com/projects/345981550050935380

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(5, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, LOW);
  int data = analogRead(A0);
  delay(data);
  digitalWrite(2, HIGH);
  delay(data);
}
