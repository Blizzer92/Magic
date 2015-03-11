#include "Font.h"

Physics::Physics()
{

}

void Physics::addObject(Object* object){

}

Physics::Gravity(int deltaTime)
{
  for (auto &object : objects) // access by reference to avoid copying
      {
        object->setY(object->getY() - 0.2f * deltaTime);
      }
}
