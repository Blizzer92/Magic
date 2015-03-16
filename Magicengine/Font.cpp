#include "Font.h"


Font::Font(std::string tex,TTF_Font* fon, SDL_Color col, int newx, int newy, SDL_Renderer* newren)
{
    setText(tex);
    setFont(fon);
    setColor(col);
    setX(newx);
    setY(newy);
    setRenderer(newren);
}

void Font::setText(std::string tex)
{
    text = tex;
}

void Font::setFont(TTF_Font* fon)
{
    font = fon;
}
void Font::setColor(SDL_Color col)
{
    color = col;
}


void Font::setX(int newx)
{
    x = newx;
}

void Font::setY(int newy)
{
    y = newy;
}
void Font::setRenderer(SDL_Renderer* newren)
{
    ren = newren;
}

bool Font::Draw()
{
    int w;
    int h;

    SDL_Texture* optimized = NULL;

    SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
    optimized = SDL_CreateTextureFromSurface(ren, textSurface);
    SDL_FreeSurface(textSurface);


    if(ren == NULL || font == NULL)
    {
        printf("False\n");
        return false;
    }

    SDL_Rect  destR;
    SDL_QueryTexture(optimized, NULL, NULL, &w, &h);
    destR.x = x;
    destR.y = y;
    destR.w = w;
    destR.h = h;

    SDL_RenderCopy(ren, optimized, NULL, &destR);

    return true;
}
