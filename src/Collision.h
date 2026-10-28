#pragma once
#include "raylib.h"
namespace rd
{
	float CheckRectangleCollision(Vector2 rectangleOnePosition, Vector2 rectagleOneSize,
		Vector2 rectangleTwoPosition, Vector2 rectagleTwoSize);
}