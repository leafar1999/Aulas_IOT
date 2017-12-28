const int b = 5;
const int v = 10;
int e;
int l;
int d;

void setup() {
  // put your setup code here, to run once:
  pinMode (b, INPUT);
  pinMode (v, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  l = digitalRead (b);
  if ((l == HIGH) && (d == LOW)) {
    e = 1 - e;
  }
  d = l;
  if (e == 1) {
    digitalWrite (v, HIGH);
  }
  else {
    digitalWrite (v, LOW);

  }
}
