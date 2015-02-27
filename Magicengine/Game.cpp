#include "Game.h"
#include "GameState.h"
Game::Game()
{
}


void Game::Window(const char* title, int width, int height, int bpp, bool fullscreen, bool debug)
{
	int flags = 0;

	// initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();

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

void Game::Init(Game* game)
{
	states.back()->Init(this);
}

void Game::ChangeState(GameState* state)
{
	if ( !states.empty() ) {
		states.back()->Clean();
		states.pop_back();
	}

	states.push_back(state);
	states.back()->Init(this);
}

void Game::PushState(GameState* state)
{

	if ( !states.empty() ) {
		states.back()->Pause();
	}

	states.push_back(state);
	states.back()->Init(this);
}

void Game::PopState()
{
	if ( !states.empty() ) {
		states.back()->Clean();
		states.pop_back();
	}

	if ( !states.empty() ) {
		states.back()->Resume();
	}
}

void Game::HandleEvents()
{
	states.back()->HandleEvents(this);
}


void Game::Update()
{
	states.back()->Update(this);
}

void Game::Draw()
{
	SDL_RenderClear(renderer);
	states.back()->Draw(this);
	SDL_RenderPresent(renderer);
}

void Game::Clean()
{
	while ( !states.empty() ) {
		states.back()->Clean();
		states.pop_back();
	};
	IMG_Quit();
	SDL_Quit();
}

bool Game::Running()
{
	return this->m_bRunning;
}

void Game::Quit()
{
	this->m_bRunning = false;
}

SDL_Renderer* Game::GetScreen()
{
	return this->renderer;
}

