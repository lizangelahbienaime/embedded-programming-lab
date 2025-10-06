/*
Exercice 07: Appeler une boucle for allant de 0 à 4 et ce à chaque 3  secondes en utilisant la Loop. Afficher la valeur du compteur de la boucle for.

void setup(){ 
  Serial.begin(9600);
 
}
void loop() { 
  for(int i = 0; i<= 4; i++){
      Serial.println(i); 
      delay(3000);
  }
}

*/ 