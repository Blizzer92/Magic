#ifndef _GAME_H_
#define _GAME_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "Load.h"
#include "Object.h"
#include "Timer.h"
#include "Font.h"
#include "Physics.h"
#include <vector>

class GameState;

class Game
{
	public:
		Game();
		void Window(const char* title, int width, int height, int bpp, bool fullscreen, int fps);
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
		Physics* getPhysics();

		bool m_bRunning;
		SDL_Window* screen;
		SDL_Renderer* renderer;
		bool m_bFullscreen;

	private:
		std::vector<GameState*> states;
		SDL_Texture* schrift;
		TTF_Font* renderFont;
		Timer fpsTimer;
		Timer capTimer;
		Timer deltaTimer;
		int countedFrames;
		int SCREEN_FPS;
		int SCREEN_TICK_PER_FRAME;
		float deltaTime;
		float avgFPS;
		Physics* phy;
};
#endif
