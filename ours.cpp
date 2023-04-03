#include ""
#include ""
#include "ours.h"
using namespace std;

void ours::setAttaque()const{
  return this-> ? ;
}

void ours::deplace(int maxX, int maxY)const{
  int X = [-2,-1,1,2];
  int Y = [-2,-1,1,2];
}

ostream& operator<<(ostream&s, ours const&cr){
  s << "attaque ="<<cr.setAttaque() << endl;
  return s;
}