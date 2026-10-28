#include "RunGame.h"
#include "raylib.h"
#include "ScreenManager.h"
#include "Player.h"

namespace rd
{
	void RunGame()
	{
		float deltaTime = 0;

		Font font = LoadFont("res/font");
		InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Flappy Bird");

		PlayerInit();
		while (!WindowShouldClose())
		{
			ClearBackground(WHITE);
			deltaTime = GetFrameTime();

			Update(deltaTime);
			Draw(font);
		}

		UnloadFont(font);

		CloseWindow();
	}
}