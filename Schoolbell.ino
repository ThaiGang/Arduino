int c = 262;
int d = 294;
int e = 330;
int f = 349;
int g = 392;
int a = 440;
int b = 494;

int notes[25] = { g, g, a, a, g, g, e, g, g, e, e, d, g, g, a, a, g, g, e, g, e, d, e, c};

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 for (int i = 0; i<12; i++){
  tone(8, notes[i],200);
  delay(500);
 }
 delay(200);

 for (int i = 12; i<25; i++){
  tone (8,notes[i],200);
  delay(500);
 }
}
