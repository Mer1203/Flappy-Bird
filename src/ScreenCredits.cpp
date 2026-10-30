#include "ScreenCredits.h"
#include "raylib.h"
#include "Button.h"

namespace rd
{
	Credits name;
	Credits tittleGameDev;

	void CreditsInit()
	{
		tittleGameDev.textPosition.x = 380;
		tittleGameDev.textPosition.y = 300;
		tittleGameDev.fontSize = 60;
		tittleGameDev.spacing = 2;

		name.textPosition.x = 380;
		name.textPosition.y = 400;
		name.fontSize = 60;
		name.spacing = 2;

		IsMousePressingBackButton();
	}

	void CreditsDraw(Font font)
	{
		BackButtonDraw();

		DrawTextEx(font, "Game development by:", tittleGameDev.textPosition, tittleGameDev.fontSize, tittleGameDev.spacing, BLACK);
		DrawTextEx(font, "Mercedes Ramirez Diaz", name.textPosition, name.fontSize, name.spacing, BLACK);
	}
}