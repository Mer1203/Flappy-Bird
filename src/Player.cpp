#include "Player.h"
#include "RunGame.h"

namespace rd
{
	Player bird;

	void PlayerInit()
	{
		bird.position.x = 200;
		bird.position.y = 400;
		bird.direction.x = 0;
		bird.direction.y = 0;
		bird.size.x = 50;
		bird.size.y = 50;
		bird.rotation = 0;
		bird.radius = 50;
		bird.score = 0;
		bird.isAlive = true;

		bird.textPosition.x = 1210;
		bird.textPosition.y = 730;
		bird.fontSize = 40;
		bird.spacing = 1;
	}

	void PlayerUpdate(float delta)
	{
		if (IsKeyDown(KEY_UP))
		{
			bird.position.y -= delta * MAX_PLAYER_SPEED;
		}
		else if (IsKeyDown(KEY_DOWN))
		{
			bird.position.y += delta * MAX_PLAYER_SPEED;
		}

		if (bird.position.y + bird.radius > WINDOW_HEIGHT)
		{
			bird.position.y = WINDOW_HEIGHT - bird.radius;
		}
		else if (bird.position.y - bird.radius < 0)
		{
			bird.position.y = 0 + bird.radius;
		}
	}

	void PlayerDraw(Font font)
	{
		DrawRectangleV(bird.position, bird.size, ORANGE); // x, y, width, height, color
		DrawCircleV(bird.position, bird.radius, YELLOW);
		DrawTextEx(font, TextFormat("v0.1"), bird.textPosition, bird.fontSize, bird.spacing, BLACK);
	}
}