#include "Button.h"
#include "ScreenManager.h"
#include "raylib.h"

namespace rd
{
	Button play;
	Button credits;

	void ButtonInit()
	{
		play.position.x = 530;
		play.position.y = 280;
		play.textPosition.x = 610;
		play.textPosition.y = 295;
		play.textSize = 40;
		play.size.y = 80; //height
		play.size.x = 280; //width
		play.fontSize = 60;
		play.spacing = 2;

		credits.position.x = 530;
		credits.position.y = 380;
		credits.textPosition.x = 575;
		credits.textPosition.y = 395;
		credits.textSize = 40;
		credits.size.y = 80; //height
		credits.size.x = 280; //width
		credits.fontSize = 60;
		credits.spacing = 2;
	}

	bool CheckCollisionMouseButton(Vector2 mousePosition, float buttonX, 
		float buttonY, float buttonHeight, float buttonWidth)
	{
		return buttonX <= mousePosition.x && buttonX + buttonWidth >= mousePosition.x
			&& mousePosition.y >= buttonY && mousePosition.y <= buttonY + buttonHeight;
	}

	void IsMousePressed()
	{
		Vector2 mousePosition = GetMousePosition();

		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			if (CheckCollisionMouseButton(mousePosition, play.position.x, 
				play.position.y, play.size.y, play.size.x))
			{
				currentScreen = Screen::Play;
			}
			else if (CheckCollisionMouseButton(mousePosition, credits.position.x, 
				credits.position.y, credits.size.y, credits.size.x))
			{
				currentScreen = Screen::Credits;
			}
		}
	}

	void ButtonDraw()
	{
		Vector2 mousePosition = GetMousePosition();

		//DIBUJO BOTONES
		DrawRectangleV(play.position, play.size, ORANGE);
		DrawRectangleV(credits.position, credits.size, ORANGE);

		if (CheckCollisionMouseButton(mousePosition, play.position.x, 
			play.position.y, play.size.y, play.size.x))
		{
			DrawRectangleV(play.position, play.size, YELLOW);
		}
		else if (CheckCollisionMouseButton(mousePosition, credits.position.x, 
			credits.position.y, credits.size.y, credits.size.x))
		{
			DrawRectangleV(credits.position, credits.size, YELLOW);
		}
	}

	void ButtonTextDraw(Font font)
	{
		DrawTextEx(font, "PLAY", play.textPosition, play.fontSize, play.spacing, WHITE);
		DrawTextEx(font, "CREDITS", credits.textPosition, credits.fontSize, credits.spacing, WHITE);
	}
}