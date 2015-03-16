#ifndef _PHYSICS_H_
#define _PHYSICS_H_

#include <vector>
#include "Object.h"

class Object;

class Physics
{
    public:
        Physics();
        void addObject(Object* object);
        void Gravity(float deltaTime);

    private:
        std::vector<Object*> objects;
};
#endif
