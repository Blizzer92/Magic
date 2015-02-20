#include <stdio.h>

#include "SDL2/SDL.h"
#include "Magiengine/Game.h"
#include "PlayState.h"

PlayState PlayState::m_PlayState;

void PlayState::Init(Game* game)
{	

	playSprite = NULL;
	playSprite = Sprite::Load("test.bmp", game->GetScreen());
	
	test = new Objekt(playSprite, 0,0,50,50);
	
	printf("PlayState Init Successful\n");
}

void PlayState::Clean()
{
	SDL_DestroyTexture(playSprite);
	printf("PlayState Clean Successful\n");
}

void PlayState::Pause()
{
	printf("PlayState Paused\n");
}

void PlayState::Resume()
{
	printf("PlayState Resumed\n");
}

void PlayState::HandleEvents(Game* game)									
{
	SDL_Event event;
	
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
			case SDL_QUIT:
				game->Quit();
				break;
		}
	}
}

void PlayState::Update(Game* game) 
{
}

void PlayState::Draw(Game* game) 
{
	SDL_RenderClear(game->GetScreen());
	test->Draw(game->GetScreen());
	Sprite::Draw(game->GetScreen(), playSprite, 100, 100, 100, 100);
	Sprite::Draw(game->GetScreen(), playSprite, 300, 300, 100, 100, 0, 0);
	SDL_RenderPresent(game->GetScreen());;
}


