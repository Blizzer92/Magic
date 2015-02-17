#ifndef _GAME_H_
#define _GAME_H_

#include "SDL2/SDL.h"

class Game
{
	public:		
		Game();		  
		void Init(const char* title, int width, int height,int bpp, bool fullscreen, bool debug);			  
		void HandleEvents(Game* game);   
		void Update();	   
		void Draw();
		void Clean();
		bool Running();
		void Quit();

	private:		   
		bool m_bRunning;
		SDL_Window* screen;
		bool m_bFullscreen;
};
#endif
