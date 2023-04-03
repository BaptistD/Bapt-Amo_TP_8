#include <iostream>
#include "animal.h"
using namespace std;

#ifndef pierre_h
#define pierre_h
class pierre : public animal{

public :
  pierre();

  virtual void setAttaque()const;

  virtual void deplace(int maxX, int maxY)const;

};
ostream& operator<<(ostream&s, pierre const&pt);
#endif 