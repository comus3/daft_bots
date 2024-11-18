#include "ultrason.h"
#include <Arduino.h>

// Définition des pins
const int trigPin = 9;
const int echoPin = 10;

// Définition des variables
long duration;
int distance;

// Fonction d'initialisation
void initUltrason() {
  pinMode(trigPin, OUTPUT);   // trigPin comme sortie
  pinMode(echoPin, INPUT);    // echoPin comme entrée
}

// Fonction pour lire la distance
int lireDistance() {
  // Clear le trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Met le trigPin à HIGH pendant 10 microsecondes
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lire le temps du signal écho
  duration = pulseIn(echoPin, HIGH);

  // Calculer la distance en centimètres
  distance = duration * 0.034 / 2;

  return distance;
}
