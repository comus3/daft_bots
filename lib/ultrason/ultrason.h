#ifndef ULTRASON_H
#define ULTRASON_H

// Définition des pins
extern const int trigPin;
extern const int echoPin;

// Déclaration des variables
extern long duration;
extern int distance;

// Déclaration des fonctions
void initUltrason();
int lireDistance();

#endif
