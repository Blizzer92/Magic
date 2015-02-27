#include <stdio.h>

#include "SDL2/SDL.h"
#include "Magicengine/Game.h"
#include "PlayState.h"

PlayState PlayState::m_PlayState;

void PlayState::Init(Game* game)
{

	playSprite = NULL;
	playSprite = Sprite::Load("test.png", game->GetScreen());
	textColor = { 255, 255, 255 };
	Font = Font::Load("Font/lazy.ttf", 26);
	test = new Objekt(playSprite, 0,0,50,50);
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
	timeText.str( "" ); 
	timeText << "Seconds since start time " << (timer->getTicks()/1000.f);
}

void PlayState::Draw(Game* game)
{

	Font::Draw(timeText.str(), Font, textColor, 50, 50, game->GetScreen());
	test->Draw(game->GetScreen());
	Sprite::Draw(game->GetScreen(), playSprite, 100, 100);
	
}


