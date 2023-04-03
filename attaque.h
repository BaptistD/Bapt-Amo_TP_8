#include <iostream>
using namespace std;

#ifndef attaque_h
#define attaque_h

class attaque{
private:
  int type; // 0 :pierre, 1: Feuille, 2:Ciseaux
public :   
attaque();
attaque(int a);
int getTypeAttaque() const;
bool resoudreAttaque(attaque &a) const;
string getNomAttaque() const;
};
#endif