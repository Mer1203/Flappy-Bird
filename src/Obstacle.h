#pragma once
#include "raylib.h"

namespace rd
{
	struct Obstacle
	{
		Vector2 position;
		Vector2 size;
	};

	const int MAX_OBSTACLE_SPEED = 300;

	extern Obstacle pipeOne;
	extern Obstacle pipeTwo;

	void ObstacleInit();
	void ObstacleUpdate(float delta);
	void ObstacleDraw();
}
