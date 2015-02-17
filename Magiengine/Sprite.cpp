#include "Sprite.h"

// constructor 
Sprite::Sprite()
{
}

SDL_Window* Sprite::Load(char* File)
{
	SDL_Window* temp = NULL;
	SDL_Window* optimized = NULL;

	if((temp = SDL_LoadBMP(File)) == NULL)
	{
		  return NULL;
	}
	
	optimized = SDL_DisplayFormatAlpha(temp);
	SDL_FreeSurface(temp);

	return optimized;
}

bool Sprite::Draw(SDL_Window* dest, SDL_Window* src, int x, int y)
{
	  if(dest == NULL || src == NULL)
	   {
				  return false;
	   }

	   SDL_Rect  destR;

	   destR.x = x;
	   destR.y = y;

	   SDL_BlitSurface(src, NULL, dest, &destR);
	   
		return true;
}

bool Sprite::Draw(SDL_Window* dest, SDL_Window* src, int x, int y, int x2, int y2, int width, int height) 
{
	if(dest == NULL || src == NULL) {
		return false;
	}
	
	SDL_Rect destR;
	
	destR.x = x;
	destR.y = x;
	
	SDL_Rect srcR;
	
	srcR.x = x2;
	srcR.y = y2;
	srcR.w = width;
	srcR.h = height;
	
	SDL_BlitSurface(src, &srcR, dest, &destR);
	
	return true;
}


