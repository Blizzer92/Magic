#ifndef _OBJECTMANAGER_H_
#define _OBJECTMANAGER_H_

#include <vector>
#include "Object.h"

class Object;

class ObjectManager
{
    public:
        ObjectManager();
        void addObject(Object* object);

    private:
        std::vector<Object*> objects;
};

#endif
