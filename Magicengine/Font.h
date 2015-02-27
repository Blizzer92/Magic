/**
 * Klasse um Text auf den Bildschirm zu bringen
 */


#ifndef _FONT_H_
#define _FONT_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>

class Font
{
    public:
        Font();
        /**
         * Lädt die Schrift mit Farbe
         * @param text String der Ausgegeben werden soll
         * @param font Pfad zur Font
         * @param color Farbe der Schrift
         * @param ren Der Renderer
         */
        static SDL_Texture* Load(std::string text, char* font, SDL_Color color, SDL_Renderer* ren);
        /**
         * Rendert die Schrift auf den Bildschirm
         * @param dest Render Ziel
         * @param src Die zu Renderende Schrift
         * @param x X-Postition für den Text
         * @param y Y-Position für den Text
         * @return bool
         */
        static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y);

};
#endif
