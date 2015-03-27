#include "Physics.h"

Physics::Physics()
{

}

void Physics::addObject(Object* object){
    objects.push_back(object);
}

void Physics::Gravity(float deltaTime)
{
    for (auto& object : objects)
    {
        object->setY(object->getY() + 10);
    }
}

void Physics::Collision(){
  for (auto& object1 : objects)
  {
    for(auto% object2 : objects)
    {

    }
    x++;
  }
  x = 1;
}
