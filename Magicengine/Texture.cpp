#include "Texture.h"

Texture::Texture()
{
}

bool Texture::Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y)
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

bool Texture::Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y, int width, int height)
{

	  if(dest == NULL || src == NULL)
	   {
				  return false;
	   }

	  SDL_Rect  destR;
	  destR.x = x;
	  destR.y = y;
	  destR.w = width;
		destR.h = height;

		SDL_RenderCopy(dest, src, NULL, &destR);

		return true;
}

bool Texture::Draw(SDL_Renderer* dest, SDL_Texture* src, int x, int y,int width, int height, int x2, int y2) {
	if(dest == NULL || src == NULL) {
		return false;
	}

	SDL_Rect destR;

	destR.x = x;
	destR.y = y;
	destR.w = width;
	destR.h = height;

	SDL_Rect srcR;

	srcR.x = x2;
	srcR.y = y2;
	srcR.w = width;
	srcR.h = height;


		SDL_RenderCopy(dest, src, &srcR, &destR);


	return true;
}
