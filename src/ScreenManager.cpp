#include "ScreenManager.h"
#include "raylib.h"

Screen currentScreen = Screen::Play;

void Update()
{
	switch (currentScreen)
	{
	case Screen::Menu:
		break;
	case Screen::Play:
		break;
	case Screen::Rules:
		break;
	case Screen::Settings:
		break;
	case Screen::Credits:
		break;
	case Screen::Exit:
		break;
	case Screen::Pause:
		break;
	case Screen::GameOver:
		break;
	default:
		break;
	}
}

void Draw()
{
	BeginDrawing();

	switch (currentScreen)
	{
	case Screen::Menu:
		break;
	case Screen::Play:
		break;
	case Screen::Rules:
		break;
	case Screen::Settings:
		break;
	case Screen::Credits:
		break;
	case Screen::Exit:
		break;
	case Screen::Pause:
		break;
	case Screen::GameOver:
		break;
	default:
		break;
	}

	EndDrawing();
}