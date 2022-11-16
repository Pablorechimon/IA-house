const int waterSensorImput = A2;
const int LedPin = 13;
int entrada;
const int threshold = 600;


void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  entrada = analogRead(waterSensorImput);

  Serial.println(entrada);
  if(entrada >= threshold) {
      digitalWrite(LedPin, HIGH);
      delay(1000);  
      digitalWrite(LedPin, LOW);
  }   
  delay(1000);

}
