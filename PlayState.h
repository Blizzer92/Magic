#ifndef _Play_STATE_H_
#define _Play_STATE_H_

#include "SDL2/SDL.h"
#include "Magiengine/GameState.h"
#include "Magiengine/Sprite.h"

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
		SDL_Texture* playSprite;
		Objekt* test;
		
};

#endif


