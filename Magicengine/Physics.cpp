#include "Physics.h"

Physics::Physics()
{

}

void Physics::addObject(Object* object){
    objects.push_back(object);
}

void Physics::Gravity(float deltaTime)
{
    /* pos += vel * timeDelta
     * vel.y += gravity * timeDelta */


    for (auto& object : objects)
    {

        auto vel = 0;
        vel =+ 9.81f * deltaTime;
        object->setY(object->getY() + vel * deltaTime);





    }
}

void Physics::Collision(){
  for (auto& object1 : objects)
  {
    for(auto& object2 : objects)
    {

    }
    x++;
  }
  x = 1;
}
