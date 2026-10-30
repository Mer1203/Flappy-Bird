#include "ScreenManager.h"
#include "raylib.h"
#include "Player.h"
#include "Obstacle.h"
#include "Button.h"
#include "ScreenMenu.h"
#include "ScreenCredits.h"

namespace rd
{
	Screen currentScreen = Screen::Menu;

	void Update(float delta)
	{
		switch (currentScreen)
		{
		case Screen::Menu:
			MenuInit();
			break;
		case Screen::Play:
			ObstacleUpdate(delta);
			PlayerUpdate(delta);
			break;
		case Screen::Rules:
			break;
		case Screen::Settings:
			break;
		case Screen::Credits:
			CreditsInit();
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
			MenuDraw(font);
			break;
		case Screen::Play:
			PlayerDraw(font);
			ObstacleDraw();
			break;
		case Screen::Rules:
			break;
		case Screen::Settings:
			break;
		case Screen::Credits:
			CreditsDraw(font);
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
}