int vm = 11;
int am = 10;
int vd = 9;
int ub;
int d;
int e1 = LOW;
int e2 = LOW;
const int b = 3;
const int bt1 = 6;
const int bt2 = 5;
const int s_t = A0;//sensor de temperatura
int l_s;//leitura do sensor
float t;//temperatura

void setup() {
  // put your setup code here, to run once:
  pinMode(vm, OUTPUT);
  pinMode(am, OUTPUT);
  pinMode(vd, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (bt1, INPUT);
  pinMode (bt2, INPUT);
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

  e1 = digitalRead(bt1);
  e2 = digitalRead(bt2);

  if (t > 30 ) {
    digitalWrite (vm, HIGH);
    digitalWrite (am, LOW);
    digitalWrite (vd, LOW);
    tone (b, 1000);

  }


  if (t > 28 && t < 30) {
    digitalWrite (am, HIGH);
    digitalWrite (vm, LOW);
    digitalWrite (vd, LOW);
    noTone (b);
  }



  if (t < 28 ) {
    digitalWrite (vd, HIGH);
    digitalWrite (am, LOW);
    digitalWrite (vm, LOW);
    noTone (b);
  }


  if (e1 == HIGH )
  {
    while (e2 == LOW)
    {
      digitalWrite (vm, HIGH);
      digitalWrite (am, LOW);
      digitalWrite (vd, LOW);
      tone (b, 1000);
      e2 = digitalRead(bt2);
    }

  }
}


