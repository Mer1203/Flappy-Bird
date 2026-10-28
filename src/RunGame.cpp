#include "RunGame.h"
#include "raylib.h"
#include "ScreenManager.h"

void RunGame()
{
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Flappy Bird");

	while (!WindowShouldClose())
	{
		ClearBackground(WHITE);

		Update();
		Draw();
	}

	CloseWindow();

}