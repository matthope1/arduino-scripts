int START_PORT = 2; //digital 
int END_PORT = 7;  //digital

void setup() {
  Serial.begin(9600);

  for (int i = START_PORT; i <= END_PORT ; i ++){
    pinMode(i, OUTPUT); //set port ‘i’ as an output port
  }

}

void loop() {
  for (int i = START_PORT; i <= END_PORT ; i ++) {
    digitalWrite(i, LOW);
    delay(1000);
  }

  for (int i = START_PORT; i <=  END_PORT ; i ++) {
    digitalWrite(i, HIGH);
    delay(1000);
  }
}

