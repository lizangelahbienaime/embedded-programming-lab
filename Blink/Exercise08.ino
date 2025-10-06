/*
Exercice 08: Réaliser le circuit ci-dessous et afficher le texte “button is pressed”
 Au complet dans votre console seulement quand le bouton est enfoncé. 
 C’est à dire quand une valeur de tension HIGH est lue à l’entrée 13.

int ledPin =13; 
void setup(){
  Serial.begin(9600); 
  pinMode(ledPin, INPUT);
    pinMode(2,OUTPUT);
} 
void loop(){ 
  if(digitalRead(ledPin) == HIGH){ 
        Serial.println("The button is pressed"); 
        digitalWrite(2,HIGH); 
  }else{ 
    Serial.println("The button is not pressed");
    digitalWrite(2,LOW); 

  }
  delay(150); 

}

 */

 
