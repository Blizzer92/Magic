/**
 * Klasse um Text auf den Bildschirm zu bringen
 */


#ifndef _FONT_H_
#define _FONT_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class Font
{
    public:
        Font();
        /**
         * Rendert die Schrift auf den Bildschirm
         * @param dest Render Ziel
         * @param src Die zu Renderende Schrift
         * @param x X-Postition für den Text
         * @param y Y-Position für den Text
         * @return bool
         */
        static bool Draw(std::string text,TTF_Font* font, SDL_Color color, int x, int y, SDL_Renderer* ren);

};
#endif
