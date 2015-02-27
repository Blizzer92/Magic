#include "Magicengine/Game.h"
#include "PlayState.h"
#include <iostream>


int main(int argc, char* argv[])
{
	Game game;

	Timer fpsTimer;
	Timer capTimer;

	game.Window("Test",640,480,32,false,true);


	game.ChangeState(PlayState::Instance());
	
	int countedFrames = 0;
	fpsTimer.start();
	const int SCREEN_FPS = 60;
	const int SCREEN_TICK_PER_FRAME = 1000 / SCREEN_FPS;

	
	while(game.Running())
	{
		capTimer.start();
		float avgFPS = countedFrames / ( fpsTimer.getTicks() / 1000.f );
		if( avgFPS > 2000000 )
		{
			avgFPS = 0;
		}
		
		game.HandleEvents();
		game.Update();
		game.Draw();
		

		++countedFrames;

		int frameTicks = capTimer.getTicks();
		if( frameTicks < SCREEN_TICK_PER_FRAME )
		{
			SDL_Delay( SCREEN_TICK_PER_FRAME - frameTicks );
		}
	}

	game.Clean();

	return 0;
}


