#include <iostream>
#include "animal.h"
using namespace std;

#ifndef ours_h
#define ours_h
class ours : public animal{

public :
  ours();

  virtual void setAttaque()const;

  virtual void deplace(int maxX, int maxY)const;

};
ostream& operator<<(ostream&s, ours const&pt);
#endif 