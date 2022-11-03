const int potensio = 14;
pinMode = (potensio, INPUT); 
int nilai = 0;
 
void setup() {
  Serial.begin(115200);
  delay(1000);
}
 
void loop() {
  nilai = analogRead(potensio);
  Serial.println(nilai);
  delay(500);
}