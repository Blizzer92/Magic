/**
 * Eine Klasse zum Zeichen und Laden von Bildern
 */

#ifndef  _TEXTURE_H_
#define _TEXTURE_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Texture
{
	public:
    /**
     *Der Constructor
     */
		Texture();

        /**
         * Zeichen der Texturen
         * Orginal Größe der Texture mit X und Y Position
         * @param dest Renderer der für das Zeichnen der Texture benötigt wird
         * @param src die Texture die gerendert werden soll
         * @param x X Position der Texture
         * @param y Y Position der Texture
         * @return TRUE
         */
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y);
        /**
         * Zeichnen der Texture
         * Angegebene Größe mit X und Y Position
         * @param dest Renderer der für das Zeichnen der Texture benötigt wird
         * @param src die Texture die gerendert werden soll
         * @param x X Position der Texture
         * @param y Y Position der Texture
         * @param width Breite der Texture
         * @param height Höhe der Texture
         * @return TRUE
         */
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y, int width, int height);
        /**
         * Zeichnen der Texture
         * Zeichnet einen Ausschnitt der Texture
         * an einer Bestimmten stelle mit einer bestimmten Größe
         * @param dest Renderer der für das Zeichnen der Texturen benötigt wird
         * @param src die Texture die gerendert werden soll
         * @param x X Position der Texture
         * @param y Y Position der Texture
         * @param width Breite der Texture
         * @param height Höhe der Texture
         * @param x2 am welchen X Punkt soll ausgeschnitten werden
         * @param y2 am welchen Y Punkt soll ausgeschnitten werden
         * @return TRUE
         */
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y, int width, int height, int x2, int y2);
};

#endif
