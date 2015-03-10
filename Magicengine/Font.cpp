#include "Font.h"

bool Font::Draw(std::string text, TTF_Font* font, SDL_Color color, int x, int y, SDL_Renderer* ren)
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
