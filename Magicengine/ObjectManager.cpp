#include "Object.h"
#include "ObjectManager.h"

ObjectManager::ObjectManager()
{
}

ObjectManager::~ObjectManager()
{
    for (auto& object : objects)
    {
        delete object;
    }
}

void ObjectManager::addObject(Object* object)
{
    objects.push_back(object);
}

void ObjectManager::removeObject(Object* object)
{
    auto i = findObjectByPointer(object);
    if (i != objects.end())
    {
        delete object;
        objects.erase(i);
    }
}

std::vector<Object*>::iterator ObjectManager::findObjectByPointer(Object* object)
{
    for (std::vector<Object*>::iterator i = objects.begin(); i != objects.end(); i++)
    {
        if (*i == object)
        {
            return i;
        }
    }
    return objects.end();
}
