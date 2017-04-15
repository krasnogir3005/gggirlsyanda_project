int brightness = 0;
int fadeAmount = 5;
void setup() {

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}


void loop() {
for(brightness=0; brightness<=255; brightness += fadeAmount) {
analogWrite(3, brightness); 

  delay(30);
  if ( brightness == 255) { 
    fadeAmount = -fadeAmount; 
  } 
   }
   delay(1000);
  for(brightness=255; brightness>=0; brightness += fadeAmount) {
  analogWrite(3, brightness); 

delay(30);
  if ( brightness == 0) { 
    fadeAmount = -fadeAmount; 
  } 
   }

   for(brightness=0; brightness<=255; brightness += fadeAmount) {
analogWrite(5, brightness);
  delay(30);
  if ( brightness == 255) { 
    fadeAmount = -fadeAmount; 
  } 
   }
   delay(1000);
  for(brightness=255; brightness>=0; brightness += fadeAmount) {
 analogWrite(5, brightness);
delay(30);
  if ( brightness == 0) { 
    fadeAmount = -fadeAmount; 
  } 
   }
   for(brightness=0; brightness<=255; brightness += fadeAmount) {
analogWrite(6, brightness);
  delay(30);
  if ( brightness == 255) { 
    fadeAmount = -fadeAmount; 
  } 
   }
   delay(1000);
  for(brightness=255; brightness>=0; brightness += fadeAmount) {
 analogWrite(6, brightness);
delay(30);
  if ( brightness == 0) { 
    fadeAmount = -fadeAmount; 
  } 
   }
for(brightness=0; brightness<=255; brightness += fadeAmount) {
analogWrite(9, brightness);
  delay(30);
  if ( brightness == 255) { 
    fadeAmount = -fadeAmount; 
  } 
   }
   delay(1000);
  for(brightness=255; brightness>=0; brightness += fadeAmount) {
 analogWrite(9, brightness);
delay(30);
  if ( brightness == 0) { 
    fadeAmount = -fadeAmount; 
  } 
   }
}
