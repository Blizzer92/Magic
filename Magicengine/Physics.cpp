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
