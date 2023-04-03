#include <iostream>
#include "animal.h"
using namespace std;

#ifndef loup_h
#define loup_h
class loup : public animal{

public :
  loup();

  virtual void setAttaque()const;

  virtual void deplace(int maxX, int maxY)const;

};
ostream& operator<<(ostream&s, loup const&pt);
#endif 