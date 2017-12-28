int verde = 11;
int vermelho = 10;
int resultado = 9;

void setup() {
  // put your setup code here, to run once:
pinMode (verde,OUTPUT);
pinMode (vermelho,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if (resultado > 10)
{
digitalWrite (verde,HIGH);
delay (50);

digitalWrite (verde,LOW);
delay (50);
}
else 
if (resultado < 10)
{
digitalWrite (vermelho,HIGH);
delay (1000);

digitalWrite (vermelho,LOW);
delay (1000);

}
}
