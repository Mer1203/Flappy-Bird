#include "ScreenManager.h"
#include "raylib.h"
#include "Player.h"

Screen currentScreen = Screen::Play;

void Update(float delta)
{
	switch (currentScreen)
	{
	case Screen::Menu:
		break;
	case Screen::Play:
		PlayerUpdate(delta);
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

void Draw(Font font)
{
	BeginDrawing();

	switch (currentScreen)
	{
	case Screen::Menu:
		break;
	case Screen::Play:
		PlayerDraw(font);
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