#include "RunGame.h"
#include <ctime>
#include <cstdlib>
#include "raylib.h"
#include "ScreenManager.h"
#include "Player.h"
#include "Obstacle.h"

namespace rd
{
	void RunGame()
	{
		srand(static_cast<int>(time(nullptr)));
		float deltaTime = 0;

		Font font = LoadFont("res/font");
		InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Flappy Bird");

		PlayerInit();
		ObstacleInit();

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