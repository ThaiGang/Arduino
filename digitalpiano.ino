#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330


int pins[] = {2, 3, 4};
int notes[] = {NOTE_C4, NOTE_D4, NOTE_E4};

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<3; i++){
    pinMode(pins[i], INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<3; i++){
    if(digitalRead(pins[i]) == HIGH) {
      tone(8, notes[i], 100);
      delay(100);
      noTone(8);
    }
  }
}
