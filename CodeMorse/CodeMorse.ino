/* 
Liz-Angelah Bien-Aimé 
Projet code morse
*/
int ledPin = 2; 
int buttonPin = 13;
const int arrLength = 48;
int arr[arrLength]; 
int arrPos = 0; 
int unitTime  = 200;
bool lastButtonState = HIGH;
bool messageReady = false;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.println("Entrez un chiffre");
  operationsList();  
}
void loop() { 
 userInput();
  bool buttonState = digitalRead(buttonPin); 
  if (buttonState == LOW && lastButtonState == HIGH) {
    delay(50); 
    if (digitalRead(buttonPin) == LOW) {
      if (arrPos > 0) {
        Serial.println("Le message est en cours");
        morseMessage();     
        messageReady = false;
      } else {
        Serial.println("Il n'y a rien pour l'instant");
      }
    }
  }
  
  lastButtonState = buttonState;
}
void userInput(){ 
  if(Serial.available() > 0){ 
    int value = Serial.parseInt(); 
    if(value >= 1 && value <= 6){ 
      appendUserInput(value);
    } else {  
      errorMessage();
    }
  }
}
void appendUserInput(int value){  
 if(arrPos < arrLength){ 
    arr[arrPos] = value; 
    arrPos++; 
    messageReady = true;
    Serial.print("Ajouté: ");
    Serial.println(value);
    Serial.println("Entrez  un autre chiffre");
  } else {
    Serial.println("Le tableau est rempli");
  }
} 
void errorMessage(){ 
  Serial.println("Ce n'est pas valide !");
  while(Serial.available() > 0) {
    Serial.read();
  }
} 
void operationsList(){  
  String operations[] = { 
    "1. The length of a dot is one unit", 
    "2. A dash is tree units", 
    "3. The space between parts of the same letter is one unit", 
    "4. The space between letters is three units", 
    "5. The space between words is seven units", 
    "6.End sentence"
  };
  for(int i = 0; i < 6; i++){
    Serial.println(operations[i]);
  }
} 
void morseMessage(){ 
   for(int i = 0; i < arrPos; i++){
    switch(arr[i]){
      case 1: 
        digitalWrite(ledPin, HIGH);
        delay(unitTime);
        digitalWrite(ledPin, LOW);
        delay(unitTime);
        break;
      case 2:
        digitalWrite(ledPin, HIGH);
        delay(unitTime*3);
        digitalWrite(ledPin, LOW);
        delay(unitTime);
        break;
      case 3: 
        digitalWrite(ledPin, LOW);
        delay(unitTime);
        break;
      case 4: 
        digitalWrite(ledPin, LOW);
        delay(unitTime*3);
        break;
      case 5: 
        digitalWrite(ledPin, LOW);
        delay(unitTime*7);
        break;
      case 6: 
        digitalWrite(ledPin, HIGH);
        delay(unitTime*2);
        digitalWrite(ledPin, LOW);
        delay(unitTime);
        break;
    }
  }
  arrPos = 0; 
  Serial.println("Entrez un nouveau chiffre");
  operationsList();
}