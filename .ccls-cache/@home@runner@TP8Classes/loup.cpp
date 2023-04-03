#include ""
#include ""
#include "loup.h"
#include "stdlib.h"
using namespace std;

void loup::setAttaque()const{
  return this-> ? ;
}

void loup::deplace(int maxX, int maxY)const{
  srand(time(NULL));
    int nombreMystere = (rand() % 10);
  int X = nombreMystere ;
  int Y = nombreMystere ;
}

ostream& operator<<(ostream&s, loup const&cr){
  s << "attaque ="<<cr.setAttaque() << endl;
  return s;
}