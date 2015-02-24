/**
 * Eine Klasse zum Zeichen von Bildern
 */

#ifndef  _SPRITE_H_
#define _SPRITE_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Sprite
{
	public:
    /**
     *Der Constructor
     */
		Sprite();
        /**
         * Funktion zum Laden der Texturen
         * @param pFile Pfad zur Datei
         * @param ren Pointer zum Renderer
         * @return Die Texture des Bildes
         */
		static SDL_Texture* Load(char* pFile, SDL_Renderer* ren);
        /**
         * Funktion zum Zeichen der Texturen
         * Orginal Größe der Texture mit X und Y Position
         * @param dest Renderer der für das Zeichnen der Texture benötigt wird
         * @param src die Texture die gerendert werden soll
         * @param x X Position der Texture
         * @param y Y Position der Texture
         * @return TRUE
         */
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y);
        /**
         * Funktion zum Zeichnen der Texture
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
         * Funktion zum Zeichnen der Texture
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
