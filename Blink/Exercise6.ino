/* 
Exercice 6 :Incrémenter un compteur (variable globale )10 fois seulement (on compte de 1 à 10 seulement une fois ) 
 en utilisant une boucle while dans la loop et afficher la valeur du compteur à chaque incrémentation
 int compteur = 0
;
void setup() {
  Serial.begin(9600);
}

void loop() { 
  while(compteur<=10){ 
    Serial.println(compteur); 
     compteur++;
     delay(1000);
  }
 
}
*/
