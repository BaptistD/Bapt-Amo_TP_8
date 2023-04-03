#include "attaque.h"
#include <iostream>
using namespace std;

#ifndef animal_h
#define animal_h

class animal {
private:
  string nom;
  int x;
  int y;
  bool vivant;
  attaque typeAttaque;

public:
  animal(int maxX, int maxY);
  animal(int maxX, int maxY, int a, int b);

  string getNom() const;
  int getX() const;
  int getY() const;
  bool getVivant() const;
  attaque getAttaque() const;
  void setVivant(bool v);
  bool attaque(animal &a);
  virtual void setAttaque()=0;
  virtual void deplace(int maxX, int maxY)=0;
};
#endif