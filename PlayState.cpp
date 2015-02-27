#include <stdio.h>

#include "SDL2/SDL.h"
#include "Magicengine/Game.h"
#include "PlayState.h"

PlayState PlayState::m_PlayState;

void PlayState::Init(Game* game)
{

	playSprite = NULL;
	playSprite = Sprite::Load("test.png", game->GetScreen());
	schrift = NULL;
	textColor = { 255, 255, 255 };
	renderFont = TTF_OpenFont("Font/lazy.ttf", 26);
	test = new Objekt(playSprite, 0,0,50,50);
	test2 = new Objekt(playSprite, 30,30,60,60);
	timer = new Timer();
	timer->start();
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
	timeText.str( "" ); timeText << "Seconds since start time " << ( timer->getTicks() / 1000.f ) ; 
	schrift = Font::Load(timeText.str().c_str(),renderFont ,textColor , game->GetScreen());
}

void PlayState::Draw(Game* game)
{
	
	Font::Draw(game->GetScreen(), schrift, 120, 120);
	test->Draw(game->GetScreen());
	test2->Draw(game->GetScreen());
	Sprite::Draw(game->GetScreen(), playSprite, 100, 100, 100, 100);
	Sprite::Draw(game->GetScreen(), playSprite, 300, 300, 100, 100, 0, 0);
	
}


