#include <stdio.h>

#include "SDL2/SDL.h"
#include "Magicengine/Game.h"
#include "PlayState.h"

PlayState PlayState::m_PlayState;

void PlayState::Init(Game* game)
{

	playTexture = NULL;
	playTexture = Load::Texture("test.png", game->GetScreen());
	textColor = { 255, 255, 255 };
	fonttype = Load::Font("Font/lazy.ttf", 26);
	test = new Object(playTexture, 0,0,50,50, game->GetScreen());
	timeFont = new Font(timeText.str(), fonttype, textColor, 50, 50, game->GetScreen());
	timer = new Timer();
	timer->start();
	printf("PlayState Init Successful\n");
}

void PlayState::Clean()
{
	SDL_DestroyTexture(playTexture);
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
	test->setX(test->getX()+1);
	timeText.str( "" );
	timeText << "Seconds since start time " << (timer->getTicks()/1000.f);
	timeFont->setText(timeText.str());
}

void PlayState::Draw(Game* game)
{

	timeFont->Draw();
	test->Draw();
	Texture::Draw(game->GetScreen(), playTexture, 100, 100);

}
