#ifndef _PHYSICS_H_
#define _PHYSICS_H_
#include <vector>
#include "Object.h"
class Physics
{
  public:
    Physics();
    void addObject(Object* object);
    bool Gravity();

  private:
    std::vector<Object*> objects;
};
#endif
