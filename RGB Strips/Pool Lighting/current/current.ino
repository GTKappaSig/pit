void setup() {
  pinMode(5, OUTPUT); // controller

  Serial.begin(9600); //initialize Serial Monitor
  analogWrite(5, 0); // 0-255, o is blue, 255 is pink
}

void loop(){}
