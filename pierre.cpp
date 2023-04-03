#include ""
#include ""
#include "pierre.h"
using namespace std;

void pierre::setAttaque()const{
  return this-> ? ;
}

void pierre::deplace(int maxX, int maxY)const{
  int X = 0;
  int Y = 0;
}

ostream& operator<<(ostream&s, pierre const&cr){
  s << "attaque ="<<cr.setAttaque() << endl;
  return s;
}