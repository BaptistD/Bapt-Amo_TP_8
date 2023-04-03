#include <iostream>
#include "animal.h"
using namespace std;

#ifndef lion_h
#define lion_h
class lion : public animal{

public :
  lion();

  virtual void setAttaque()const;

  virtual void deplace(int maxX, int maxY)const;

};
ostream& operator<<(ostream&s, lion const&pt);
#endif 