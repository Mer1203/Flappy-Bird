#pragma once
#include "raylib.h"
namespace rd
{
	struct Obstacle
	{
		Vector2 position;
		Vector2 size;

	};

	void ObstacleInit();
	void ObstacleUpdate();
	void ObstacleDraw();
}
