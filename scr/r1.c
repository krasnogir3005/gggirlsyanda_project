// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH); 
  digitalWrite(5, HIGH);
  delay(1000);                       
  
digitalWrite(3, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH); 
  digitalWrite(9, HIGH);
  delay(1000);

  digitalWrite(6, LOW);
digitalWrite(9, LOW);
  
                         
}
