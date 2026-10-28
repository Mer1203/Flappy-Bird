#pragma once
#include "raylib.h"

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

void Update(float delta);
void Draw(Font font);