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
        void Collision();

    private:
        std::vector<Object*> objects;
        int x = 1;
};
#endif
