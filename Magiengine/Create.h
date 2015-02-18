#ifndef  _CREATE_H_
#define _CREATE_H_

#include <SDL2/SDL.h>

class Create
{
	public:
		Create();
		void Init(const char* title, int width, int height,int bpp, bool fullscreen, bool debug);   
		bool m_bRunning;
		SDL_Window* screen;
		SDL_Renderer* renderer;
		bool m_bFullscreen;
};

#endif
