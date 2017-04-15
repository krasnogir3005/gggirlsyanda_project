int brightness = 0; 
int fadeAmount = 5; 
void setup() { 

pinMode(3, OUTPUT); 
pinMode(5, OUTPUT); 
pinMode(6, OUTPUT); 
pinMode(9, OUTPUT); 
} 


void loop() { 
const int lowestPin = 2; 
const int highestPin = 13; 


void setup() { 
// сделаем контакты со 2-го по 13-ый выходными контактами: 
for (int thisPin =lowestPin; thisPin <= highestPin; thisPin++) { 
pinMode(thisPin, OUTPUT); 
} 
} 

void loop() { 
// делаем перебор контактов – один за другим: 
for (int thisPin =lowestPin; thisPin <= highestPin; thisPin++) { 
// повышаем яркость выбранного светодиода (thisPin) от нуля до максимума: 
for (int brightness = 0; brightness < 255; brightness++) { 
analogWrite(thisPin, brightness); 
delay(2); 
} 
// понижаем яркость выбранного светодиода (thisPin) с максимума до нуля: 
for (int brightness = 255; brightness >= 0; brightness--) { 
analogWrite(thisPin, brightness); 
delay(2); 
} 
// делаем задержку между манипуляциями со светодиодами: 
delay(100); 
} 
}
