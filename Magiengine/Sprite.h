#ifndef  _SPRITE_H_
#define _SPRITE_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Sprite
{
	public:
		Sprite();
		static SDL_Texture* Load(char* pFile, SDL_Renderer* ren);
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y);
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y, int width, int height);
		static bool Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y, int width, int height, int x2, int y2);
};

#endif
