#include "ScreenExit.h"
#include "raylib.h"
#include "ScreenManager.h"

namespace rd
{
	void ExitUpdate(bool& gameIsRunning)
	{
		if (currentScreen == Screen::Exit)
		{
			gameIsRunning = false;
		}
	}
}