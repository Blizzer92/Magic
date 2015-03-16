#ifndef _OBJECTMANAGER_H_
#define _OBJECTMANAGER_H_

#include <vector>

class Object;

class ObjectManager
{
    public:
        ObjectManager();
        ~ObjectManager();

        /**
         * @note
         * Der ObjectManager löscht Objekte automatisch.  Es ist also nicht
         * nötig diese selbst zu löschen.
         */
        void addObject(Object* object);

        /**
         * Löscht das angegegebene Objekt, sofern es vom ObjectManager verwaltet
         * wird.
         */
        void removeObject(Object* object);

    private:
        /**
         * Sucht ein Objekt anhand seines Zeigers.  Falls es nicht im
         * ObjectManager existiert, wird `objects.end()` zurück gegeben.
         */
        std::vector<Object*>::iterator findObjectByPointer(Object* object);

        /**
         * @note
         * Aktuell werden die Objekte in einer simplen Liste gespeichert.
         * Das ist für kleine Objektmanagen noch in Ordnung.
         * Sobald die Engine größere Objektmengen verwalten muss, macht es Sinn
         * stattdessen eine Struktur zu nutzen die Objekte anhand ihrer Position
         * speichert.  (Beispielsweise ein Quadtree.)
         */
        std::vector<Object*> objects;
};

#endif
