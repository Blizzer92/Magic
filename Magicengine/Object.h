/**
 * Diese Klasse erzeugt ein Objekt mit den vorgegeben Parametern,
 * mit diesen Objekt können dann Kolisionsabfragen gemacht werden oder änliches.
 */

#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


class Object
{
    public:
        /**
         * Object wird mittels Konstruktor erstellt damit es zu keinen Fehler kommt
         * wenn einer der Parametern nicht gegeben sein sollte.
         * @param src Texture des Objektes
         * @param ren Renderer
         * @param x X Position des Objektes
         * @param y Y Position des Objektes
         */
        Object(SDL_Texture* src, SDL_Renderer* ren, float x, float y);
        /**
         * Object wird mittels Konstruktor erstellt damit es zu keinen Fehler kommt
         * wenn einer der Parametern nicht gegeben sein sollte.
         * @param src Texture des Objektes
         * @param ren Renderer
         * @param x X Position des Objektes
         * @param y Y Position des Objektes
         * @param width Breite des Objektes
         * @param height Höhe des Objektes
         */
        Object(SDL_Texture* src, SDL_Renderer* ren, float x, float y, int width, int height);
        /**
         * Gibt die x-Position zurück
         * @return int
         */
        float getX();
        /**
         * Git die y-Position zurück
         * @return int
         */
        float getY();
        /**
         * Gint die Breite zurück
         * @return int
         */
        int getWidth();
        /**
         * Gib dir Höhe zurück
         * @return int
         */
        int getHeight();
        /**
         * Gibt die Texture zurück
         * @return SDL_TEXTURE
         */
        SDL_Texture* getTexture();
        /**
         * Get the renderer from the object
         * @return SDL_Renderer
         */
        SDL_Renderer* getRenderer();
        /**
         * Set the renderer for the object
         * @pram ren
         */
        void setRenderer(SDL_Renderer* newren);
        /**
         * Setzt die X-Position neu
         * @param x
         */
        void setX(float x);
        /**
         * Setzt die Y-Position neu
         * @param y
         */
        void setY(float y);
        /**
         * Setzt die Höhe neu
         * @param width
         */
        void setWidth(int width);
        /**
         * Setzt die Breite neu
         * @param height
         */
        void setHeight(int height);
        /**
         * Setzt die Texture neu
         * @param tex
         */
        void setTexture(SDL_Texture* tex);
        /**
         * Zeichen der Texturen
         * @return TRUE
         */
        bool Draw();



    private:
        float x;
        float y;
        int width;
        int height;
        SDL_Texture* texture;
        SDL_Renderer* ren;
};

#endif
