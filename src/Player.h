#pragma once
#include "raylib.h"

namespace rd
{
	struct Player
	{
		Vector2 position = { 0,0 };
		Vector2 direction = { 0,0 };
		Vector2 size = { 0,0 };
		int score = 0;
		float rotation = 0.0f;
		float radius = 0.0f;
		float velocity = 0.0f;
		float jumpForce = 0.0f;
		bool isAlive = true;
		Vector2 textPosition = { 0,0 };
		float fontSize = 0.0f;
		float spacing = 0.0f;
	};

	const int GRAVITY = 500;

	extern Player bird;

	void PlayerInit();
	void PlayerUpdate(float delta);
	void PlayerDraw();
	void isPlayerAlive();
}