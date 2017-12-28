const int s_t = A0;//sensor de temperatura
int l_s;//leitura do sensor
float t;//temperatura

void setup() {
  // put your setup code here, to run once:

  analogReference(INTERNAL); //capita a referencia da porta analogica
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  l_s = analogRead(s_t);
  t = l_s * 0.1075268817204301;
  Serial.print("Temperatura: ");
  Serial.println(t);
  delay(1000);
}
