/**
 * Class for drawing font
 */

#ifndef _FONT_H_
#define _FONT_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class Font
{
    public:
        Font(std::string text,TTF_Font* font, SDL_Color color, int x, int y, SDL_Renderer* ren);
        /**
         * Rendert die Schrift auf den Bildschirm
         * @return bool
         */
        bool Draw();
        void setText(std::string text);
        void setFont(TTF_Font* font);
        void setColor(SDL_Color color);
        void setX(int x);
        void setY(int y);
        void setRenderer(SDL_Renderer* ren);
        std::string getText();
        TTF_Font* getFont();
        SDL_Color getColor();
        int getX();
        int getY();
        SDL_Renderer* getRenderer();

    private:
        std::string text;
        TTF_Font* font;
        SDL_Color color;
        int x;
        int y;
        SDL_Renderer* ren;

};
#endif
