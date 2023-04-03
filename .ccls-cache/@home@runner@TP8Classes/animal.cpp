#include "animal.h"
#include "attaque.h"
#include "stdlib.h"
using namespace std;

animal::animal(int maxX, int maxY) {
  this->x = maxX;
  this->y = maxY;
}

animal::animal(int maxX, int maxY, int a, int b) {
  this->x = maxX;
  this->y = maxY;
}

string animal::getNom() const { return this->nom; }
int animal::getX() const { return this->x; }
int animal::getY() const { return this->y; }
bool animal::getVivant() const { return this->vivant; }
attaque animal::getAttaque() const { return this->typeAttaque; }

void animal::setVivant(bool v) { this->vivant = v; }

bool animal::attaque(animal &a) {
  srand(time(NULL));
  int nombreMystere = (rand() % 3);
  this->x = nombreMystere;
}