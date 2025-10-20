/*   
Exercice 19: Réaliser un script pour vous connecter au WIfi.  
N’oubliez pas d’inclure la librairie <Wifi.h> (1). 
Utiliser l’identifiant de la connexion au réseau du collège et le mot de passe(2). 
Charger votre sketch sur l’ESP32 et regarder le moniteur pour voir si vous êtes bel et bien connecté.  

*/ 
#include <WiFi.h>
#include <HTTPClient.h>
const char* ssid = "osq-dlink_DIR-655";   //your ssid of the router
const char* password = "Bordeaux00" ; //password of the router

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);  
  delay(10); 
  Serial.println();  
  Serial.println("Connecting to"); 
  Serial.println(ssid);  
  WiFi.begin(ssid, password); 
  while(WiFi.status() != WL_CONNECTED){ 
    delay(500);  
    Serial.print(""); 
  } 
  Serial.println("");  
  Serial.println("Wifi is connected");  
  Serial.println("IP address");  
  Serial.println(WiFi.localIP());
}
void loop() {

}
