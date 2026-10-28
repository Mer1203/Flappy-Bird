#include "RunGame.h"
#include "raylib.h"
#include "ScreenManager.h"

void RunGame()
{
	Font font = LoadFont("res/font");
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Flappy Bird");

	while (!WindowShouldClose())
	{
		ClearBackground(WHITE);

		Update();
		Draw(font);
	}

	UnloadFont(font);

	CloseWindow();
}