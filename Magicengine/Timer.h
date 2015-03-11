#ifndef _TIMER_H_
#define _TIMER_H_
#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>

class Timer
{
public:
	Timer();
		void start();
		void stop();
		void pause();
		void unpause();
		Uint32 getTicks();
		bool isStarted();
		bool isPaused();

	private:
		Uint32 mStartTicks;
		Uint32 mPausedTicks;
		bool mPaused;
		bool mStarted;
};
#endif
