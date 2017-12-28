void setup() {
  Serial.begin(9600);
  Serial.println("Inciando a Serial ...");
  int contador = 1;
  while (contador <= 50)
  {
    Serial.print("contador: ");
  Serial.println(contador);
  contador++;
}
}

void loop() {
  

}
