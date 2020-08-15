#define enA 9
#define in1 8 
#define in2 7
#define potValue A0
void setup() {
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(potValue, INPUT);
 
  
}
void loop() {
  int potValue = analogRead(A0); // Read potentiometer value
//  int pwmOutput = map(potValue, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
  int pwmOutput = map(potValue, 0, 1023, 0 , 2000); // Map the potentiometer val ue from 0 to 1023
  analogWrite(enA, 255); // Send PWM signal to L298N Enable pin
  

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(pwmOutput);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(pwmOutput);
  Serial.println(pwmOutput);
  
}

// This code was written by Abo-Bakr Emara from LOGICON Egypt
