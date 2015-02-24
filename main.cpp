#include "Magicengine/Game.h"
#include "PlayState.h"
#include <iostream>


int main(int argc, char* argv[])
{
	Game game;

	game.Window("Test",640,480,32,false,true);

	game.ChangeState(PlayState::Instance());

	while(game.Running())
	{
		game.HandleEvents();
		game.Update();
		game.Draw();
	}

	// cleanup the engine
	game.Clean();

	return 0;
}


