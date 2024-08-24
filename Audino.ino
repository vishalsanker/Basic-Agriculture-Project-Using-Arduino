int relayPin = 2;
int a = 6;
// enter the crop required water
int according_to_crop_type = 25 //  Example threshold value

void setup() {
  pinMode(a, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  int aa = digitalRead(a);
  if(aa > accoding_to_crop_type)  {
  digitalWrite(relayPin, HIGH);
  }
  else  {
  digitalWrite(relayPin, LOW);

  }
}
