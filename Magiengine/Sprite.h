#ifndef  _SPRITE_H_
#define _SPRITE_H_

#include "SDL2/SDL.h"

class Sprite
{
	public:	   
	Sprite();		 
	static SDL_Window* Load(char* pFile);
	static bool Draw(SDL_Window* dest, SDL_Window* src, int x, int y);		  
	static bool Draw(SDL_Window* dest, SDL_Window* src, int x, int y, int x2,  
	int y2, int width, int height);
};
#endif
