#include "Game.h"
Game::Game()
{  
}

void Game::Init(const char* title, int width, int height, int bpp, bool fullscreen, bool debug)
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

	testSprite = NULL;
	testSprite = Sprite::Load("test.bmp", renderer);
	
	m_bRunning = true;

		// print our success
	printf("Game Initialised Succesfully\n");
}



void Game::HandleEvents(Game* game)
{
	SDL_Event event;
	
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
			case SDL_QUIT:
				game->Quit();
				break;
				
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {
					case SDLK_ESCAPE:
						game->Quit();
				}
				break;
		}
	}
}



void Game::Update()
{
}

void Game::Draw()
{
	SDL_RenderClear(renderer);
	Sprite::Draw(renderer, testSprite, 0, 0);
	Sprite::Draw(renderer, testSprite, 100, 100, 100, 100);
	Sprite::Draw(renderer, testSprite, 300, 300, 100, 100, 0, 0);
	SDL_RenderPresent(renderer);
}

void Game::Clean()
{
	SDL_DestroyTexture(testSprite);
}

bool Game::Running()
{
	return m_bRunning;
}

void Game::Quit()
{
	m_bRunning = false;
}
