#pragma once
#include "raylib.h"

namespace rd
{
	struct Credits
	{
		Vector2 size;
		Vector2 textPosition;
		float fontSize;
		float spacing;
	};

	extern Credits name;

	void CreditsInit();
	void CreditsDraw();
}