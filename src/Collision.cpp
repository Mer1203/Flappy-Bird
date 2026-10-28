#include "Collision.h"
#include "raylib.h"

namespace rd
{
	float CheckRectangleCollision(Vector2 rectangleOnePosition, Vector2 rectangleOneSize,
		Vector2 rectangleTwoPosition, Vector2 rectangleTwoSize)
	{
		return !(rectangleOnePosition.x + rectangleOneSize.x < rectangleTwoPosition.x ||
			rectangleOnePosition.x > rectangleTwoPosition.x + rectangleTwoSize.x ||
			rectangleOnePosition.y + rectangleOneSize.y < rectangleTwoPosition.y ||
			rectangleOnePosition.y > rectangleTwoPosition.y + rectangleTwoSize.y);
	}

	//float CheckRectangleCollision(Vector2 rectangleOnePosition, Vector2 rectagleOneSize,
	//	Vector2 rectangleTwoPosition, Vector2 rectagleTwoSize)
	//{
	//	return !(rectangleOnePosition.x - rectagleOneSize.x * 0.5 > rectangleTwoPosition.x + rectagleTwoSize.x * 0.5 ||
	//		rectangleOnePosition.x + rectagleOneSize.x * 0.5 < rectangleTwoPosition.x - rectagleTwoSize.x * 0.5 ||
	//		rectangleOnePosition.y - rectagleOneSize.y * 0.5 > rectangleTwoPosition.y + rectagleTwoSize.y * 0.5 ||
	//		rectangleOnePosition.y + rectagleOneSize.y * 0.5 < rectangleTwoPosition.y - rectagleTwoSize.y * 0.5);
	//}

}