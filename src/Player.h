#pragma once
#include "raylib.h"

struct Player
{
	Vector2 position = { 0,0 };
	Vector2 direction = { 0,0 };
	Vector2 size = { 0,0 };
	int score = 0;
	int height = 0;
	int width = 0;
	float rotation = 0.0f;
	float radius = 0.0f;
	bool isAlive = true;
};

extern Player bird;

void PlayerInit();
void PlayerUpdate();
void PlayerDraw();