/**
 * Diese Klasse erzeugt ein Objekt mit den vorgegeben Parametern,
 * mit diesen Objekt können dann Kolisionsabfragen gemacht werden oder änliches.
 */

#ifndef _OBJEKT_H_
#define _OBJEKT_H_

#include <SDL2/SDL.h>

class Objekt
{
	public:
        /**
         * Objekt wird mittels Construkter erstellt damit es zu keinen Fehler kommt
         * wenn einer der Parametern nicht gegeben sein sollte.
         * @param src Texture des Objektes
         * @param x X Position des Objektes
         * @param y Y Position des Objektes
         * @param width Breite des Objektes
         * @param height Höhe des Objektes
         */
		Objekt(SDL_Texture* src, int x, int y, int width, int height);
        /**
         * Gibt die x-Position zurück
         * @return int
         */
		int getX();
        /**
         * Git die y-Position zurück
         * @return int
         */
		int getY();
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
         * Setzt die X-Position neu
         * @param x
         */
		void setX(int x);
        /**
         * Setzt die Y-Position neu
         * @param y
         */
		void setY(int y);
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
         * Zeichnet das Objekt auf den Renderer
         * @param ren der Renderer
         */
		void Draw(SDL_Renderer* ren);



	private:
	   int x;
	   int y;
	   int width;
	   int height;
	   SDL_Texture* texture;
};
#endif
