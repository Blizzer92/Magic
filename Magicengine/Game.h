#ifndef _GAME_H_
#define _GAME_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Sprite.h"
#include "Objekt.h"

#include <vector>

class GameState;

class Game
{
	public:
		Game();
		void Window(const char* title, int width, int height, int bpp, bool fullscreen, bool debug);
		void Init(Game* game);
		void ChangeState(GameState* state);
		void PushState(GameState* state);
		void PopState();
		void HandleEvents();
		void Update();
		void Draw();
		void Clean();
		bool Running();
		void Quit();
		SDL_Renderer* GetScreen();

		bool m_bRunning;
		SDL_Window* screen;
		SDL_Renderer* renderer;
		bool m_bFullscreen;

	private:
		std::vector<GameState*> states;
};
#endif
