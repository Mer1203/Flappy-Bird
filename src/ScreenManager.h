#pragma once
#include "raylib.h"

namespace rd
{
	enum class Screen
	{
		Menu = 0,
		Play,
		Rules,
		Settings,
		Credits,
		Exit,
		Pause,
		GameOver
	};

	extern Screen currentScreen;

	void Update(float delta, bool& gameIsRunning);
	void Draw(Font font);
}