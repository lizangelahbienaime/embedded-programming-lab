/*
Exercice 12: Afficher dans le moniteur, la valeur de tension (en Volt) lue à la sortie du potentiomètre.
 La valeur de tension maximale est mise sur une échelle de 4095 (Utiliser une règle de 3 pour afficher la tension). 
 Ainsi, une valeur de de 4095 correspond à une tension entrante de 5V.  
 Analog Output. 
 l'exercise 11 et 12.
 Analog Input and OutPut

 
int pin = 27;
int ledPin = 2;
void setup() {
  Serial.begin(115200);
  pinMode(pin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {    
  int value = analogRead(pin);  
  float volt = ( (float)value / 4095.0 ) * 5.0; 
  analogWrite(ledPin, volt);
  Serial.println(volt);
}
 */




