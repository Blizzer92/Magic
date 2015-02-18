#include "Game.h"
Game::Game()
{  
}

void Game::Init()
{

	create.Init("Test",640,480,32,false,true);
	testSprite = NULL;
	testSprite = Sprite::Load("test.bmp", create.renderer);
	int test = 0;

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

	if(test <= 500)
	{
		test++;
	}
}

void Game::Draw()
{
	SDL_RenderClear(create.renderer);
	Sprite::Draw(create.renderer, testSprite, test, 0);
	Sprite::Draw(create.renderer, testSprite, 100, 100, 100, 100);
	Sprite::Draw(create.renderer, testSprite, 300, 300, 100, 100, 0, 0);
	SDL_RenderPresent(create.renderer);
}

void Game::Clean()
{
	SDL_DestroyTexture(testSprite);
}

bool Game::Running()
{
	return create.m_bRunning;
}

void Game::Quit()
{
	create.m_bRunning = false;
}
