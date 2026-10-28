#pragma once

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

void Update();
void Draw();