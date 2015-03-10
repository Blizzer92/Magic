#ifndef _Play_STATE_H_
#define _Play_STATE_H_

#include "SDL2/SDL.h"
#include "Magicengine/GameState.h"
#include "Magicengine/Texture.h"
#include "Magicengine/Load.h"
#include "Magicengine/Font.h"
#include "Magicengine/Timer.h"
#include <string>
#include <sstream>

class PlayState : public GameState
{
	public:
		void Init(Game* game);
		void Clean();

		void Pause();
		void Resume();

		void HandleEvents(Game* game);
		void Update(Game* game);
		void Draw(Game* game);

		static PlayState* Instance()
		{
			return &m_PlayState;
		}

	protected:

		PlayState() {}

	private:
		static PlayState m_PlayState;
		SDL_Texture* playTexture;
		Objekt* test;
		Timer* timer;
		std::stringstream timeText;
		SDL_Color textColor;
		TTF_Font* Font;

};

#endif
