#include "Obstacle.h"
#include <ctime>
#include <cstdlib>
#include "raylib.h"
#include "RunGame.h"
#include "Player.h"

namespace rd
{
	Obstacle pipe;

	void ObstacleInit()
	{
		pipe.position.x = WINDOW_WIDTH;
		pipe.position.y = 700;
		pipe.size.x = 80;
		pipe.size.y = WINDOW_HEIGHT;
	}	

	void ObstacleUpdate(float delta)
	{
		if (!bird.isAlive)
		{
			ObstacleInit();
		}

		pipe.position.x -= delta * MAX_OBSTACLE_SPEED;
		
		if (pipe.position.x + pipe.size.x < 0)
		{
			pipe.position.y = static_cast<float>(rand()% (700 - 200 + 1) + 200);
			pipe.position.x = WINDOW_WIDTH;
		}

	}

	void ObstacleDraw()
	{
		DrawRectangleV(pipe.position, pipe.size,RED);
	}
}