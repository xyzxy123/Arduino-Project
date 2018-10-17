int motor1 = 3; 
int motor2 = 11; 
int motorpin1 = 12;
int motorpin2 = 13; 
int speed = 0; 
void setup() { 
  pinMode(motor1, OUTPUT); 
  pinMode(motor2, OUTPUT); 
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2, OUTPUT);
  Serial.begin(9600); 
  while (! Serial); 
  Serial.println("Speed 0 to 255"); 
        digitalWrite(motorpin1, HIGH);
      digitalWrite(motorpin2, HIGH);
} 

void loop() { 
  if (Serial.available()) { 
    int speed = Serial.parseInt(); 
    Serial.println(speed);
    if (speed >= 0 && speed <= 255) { 
      analogWrite(motor1, speed); 
      analogWrite(motor2, speed); 
      } 

    } 
}
