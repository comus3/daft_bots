#include <Arduino.h>
#include <ultrason.h>

void setup() {
  Serial.begin(9600);         // Initialiser la communication série
  initUltrason();             // Initialiser les pins du capteur ultrason
}

void loop() {
  // Lire la distance
  int distance = lireDistance();

  // Afficher la distance sur le moniteur série
  Serial.print("Distance en cm: ");
  Serial.println(distance);

  delay(500);  // Attendre 500 ms avant la prochaine mesure
}