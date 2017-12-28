const int b = 5;
const int v = 6;
int e;

void setup() {
  // put your setup code here, to run once:
pinMode (b,INPUT);
pinMode (v,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
e = digitalRead (b);
if (e == HIGH) {
digitalWrite (v,HIGH);
}
else {
digitalWrite (v,LOW);

}
}
