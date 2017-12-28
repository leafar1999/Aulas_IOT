const int vm = 11;
const int am = 10;
const int vd = 9;
const int b = 5;
int l;
int d;
int e;



void setup() {
  pinMode (b, INPUT);
  pinMode (vm, OUTPUT);
  pinMode (am, OUTPUT);
  pinMode (vd, OUTPUT);

}

void loop() {

  e = digitalRead (b);

  if ((l == HIGH)&&(d == LOW)){
    e=1-e;

d=l;

    if (e == 1) {
      switch (e) {
        case 1:
          digitalWrite (vm, HIGH);
          digitalWrite (am, LOW);
          digitalWrite (vd, LOW);
          delay (1000);

        case 2:
          digitalWrite (am, HIGH);
          digitalWrite (vm, LOW);
          digitalWrite (vd, LOW);
          delay (1000);

        case 3:
          digitalWrite (vd, HIGH);
          digitalWrite (vm, LOW);
          digitalWrite (am, LOW);
          delay (1000);
          return;
      }
    }
  }
  }
