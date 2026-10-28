#include "Player.h"

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
}

void PlayerUpdate()
{

}

void PlayerDraw()
{
	DrawRectangle(bird.position.x, bird.position.y, bird.size.x, bird.size.y, BLUE); // x, y, width, height, color
	DrawCircle(bird.position.x, bird.position.y, bird.radius, GREEN);
}