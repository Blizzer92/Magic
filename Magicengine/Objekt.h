#ifndef _OBJEKT_H_
#define _OBJEKT_H_

#include <SDL2/SDL.h>

class Objekt
{
	public:		
		Objekt(SDL_Texture* src, int x, int y, int width, int height);
		int getX();
		int getY();
		int getWidth();
		int getHeight();
		void setX(int x);
		void setY(int y);
		void setWidth(int width);
		void setHeight(int height);
		void Draw(SDL_Renderer* ren);
		


	private:
	   int x;
	   int y;
	   int width;
	   int height;
	   SDL_Texture* texture;
};
#endif
