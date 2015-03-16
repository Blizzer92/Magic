#include "Load.h"

TTF_Font* Load::Font(char* file, int size){
    if(TTF_OpenFont(file, size) == NULL)
    {
        printf("TTF_OpenFont: %s\n", TTF_GetError());
        printf("Schrift nicht geladen\n");
        return NULL;
    }
    printf("Schrift geladen\n");
    return TTF_OpenFont(file, size);
}


SDL_Texture* Load::Texture(char* File, SDL_Renderer* ren)
{
    SDL_Surface* temp = NULL;
    SDL_Texture* optimized = NULL;

    if((temp = IMG_Load(File)) == NULL)
    {
        return NULL;
    }

    optimized = SDL_CreateTextureFromSurface(ren, temp);
    SDL_FreeSurface(temp);

    return optimized;
}
