#ifndef _GAME_H_
#define _GAME_H_

#include <SDL2/SDL.h>
#include "Magiengine/Sprite.h"
#include "Magiengine/Create.h"

class Game
{
	public:		
		Game();		  
		void Init();			  
		void HandleEvents(Game* game);   
		void Update();	   
		void Draw();
		void Clean();
		bool Running();
		void Quit();

	private:		   
		SDL_Texture* testSprite;
		Create create;
		int test;	
};
#endif
