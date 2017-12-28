int contador = 1;

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando a Serial...");



for (contador = 1; contador <=50; contador++)
{
Serial.print("contador: ");
Serial.println(contador);
}
}
void loop() {


}
