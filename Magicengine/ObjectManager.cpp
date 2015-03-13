#include "ObjectManager.h"

ObjectManager::ObjectManager()
{

}

void ObjectManager::addObject(Object* object){
  objects.push_back(object);
}
