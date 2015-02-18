#include "Magiengine/Game.h"

int main(int argc, char* argv[]) 
{
	Game game;
	
	game.Init("Test",640,480,32,false,true);
	
	while(game.Running())
	{
		game.HandleEvents(&game);
		game.Update();
		game.Draw();
	}
	
	// cleanup the engine
	game.Clean();
	
	return 0;
}


