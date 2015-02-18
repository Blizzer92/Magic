#include "Create.h"

// constructor 
Create::Create()
{
}

void Create::Init(const char* title, int width, int height, int bpp, bool fullscreen, bool debug)
{
	int flags = 0;
	
	
	
	// initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);
	
	
	if ( fullscreen ) {
		flags = SDL_WINDOW_FULLSCREEN;
	}
	


	
	m_bFullscreen = fullscreen;
	
	screen = SDL_CreateWindow(title,
                          SDL_WINDOWPOS_UNDEFINED,
                          SDL_WINDOWPOS_UNDEFINED,
                          width, height,
                          flags);

	renderer = SDL_CreateRenderer(screen, -1, 0);

	
	m_bRunning = true;

		// print our success
	printf("Game Initialised Succesfully\n");
}
