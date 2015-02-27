#include "Font.h"

SDL_Texture* Font::Load(std::string text, TTF_Font* renderFont, SDL_Color color, SDL_Renderer* ren)
{
	SDL_Texture* optimized = NULL;


if(renderFont == NULL)
{

		printf("TTF_OpenFont: %s\n", TTF_GetError());
		printf("Schrift nicht geladen\n");
		return NULL;
	
	
}

    SDL_Surface* textSurface = TTF_RenderText_Solid(renderFont, text.c_str(), color);

    optimized = SDL_CreateTextureFromSurface(ren, textSurface);



    SDL_FreeSurface(textSurface);

    return optimized;
}

bool Font::Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y)
{
    int w;
    int h;

    if(dest == NULL || src == NULL)
    {
        return false;
    }

    SDL_Rect  destR;
    SDL_QueryTexture(src, NULL, NULL, &w, &h);
    destR.x = x;
    destR.y = y;
    destR.w = w;
    destR.h = h;

    SDL_RenderCopy(dest, src, NULL, &destR);

    return true;
    
}
