 /* 
 Exercice 07_2 : Faites allumer et éteindre une LED par intervalle de 1 seconde. Utiliser la sortie digitale 4.
 int ledPin = 4; 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() { 
    Serial.println(ledPin + "ledpin");
    digitalWrite(4,LOW); //le led 3.3 salume lorsquelle a du courant
     delay(1000);
     digitalWrite(4,HIGH);
      delay(1000);
}
*/ 
