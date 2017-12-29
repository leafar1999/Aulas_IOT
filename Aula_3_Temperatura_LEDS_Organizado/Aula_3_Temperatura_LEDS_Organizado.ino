const int ledverde = 9;
const int ledamarelo =10 ;
const int ledvermelho = 11;
const int btn_liga_alarme = 5;
const int btn_desliga_alarme = 6;
const int buzzer = 3;
int estado_btn_liga_alarme = LOW;
int estado_btn_desliga_alarme = LOW;
int sensor_temperatura = A0;
int leitura_sensor = 0;
float temperatura;

void setup() {

  analogReference(INTERNAL);
  Serial.begin(9600);
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(btn_liga_alarme, OUTPUT);
  pinMode(btn_desliga_alarme, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void liga_alarme() {

  digitalWrite(ledvermelho, HIGH);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarelo, LOW);
  tone(buzzer, 500);
}


void desliga_alarme_verde() {

  digitalWrite(ledverde, HIGH);
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledvermelho, LOW);
  noTone(buzzer);

}
void desliga_alarme_amarelo() {

  digitalWrite(ledamarelo, HIGH);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledvermelho, LOW);
  noTone(buzzer);
}
void leitura_botao() {
  estado_btn_liga_alarme = digitalRead(btn_liga_alarme);
  Serial.print("btn_liga_alarme: ");
  Serial.println(estado_btn_liga_alarme);
  Serial.print("btn_desliga_alarme: ");
  Serial.println(estado_btn_desliga_alarme);
}

void leitura_temperatura() {

  leitura_sensor = analogRead(sensor_temperatura);
  temperatura = leitura_sensor * 0.1075268817204301;
}
void loop() {

  leitura_botao();
  leitura_temperatura();



  //Sensor Automatica

  if (temperatura > 30)
  {

    liga_alarme();

  }
  if (temperatura <= 28)
  {
    desliga_alarme_verde();
  }
  if (temperatura > 28 && temperatura < 30)
  {
    desliga_alarme_amarelo();
  }
  //Sensor manual

  if (estado_btn_desliga_alarme == HIGH) {

    desliga_alarme_verde();
  }
  if (estado_btn_liga_alarme == HIGH) {

    while (estado_btn_desliga_alarme != HIGH)
    {
      digitalWrite(ledvermelho, HIGH);
      digitalWrite(ledverde, LOW);
      digitalWrite(ledamarelo, LOW);
      tone(buzzer, 500);
      estado_btn_desliga_alarme = digitalRead(btn_desliga_alarme);
    }

  }
}


