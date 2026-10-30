#include "ScreenMenu.h"
#include "raylib.h"
#include "Button.h"

namespace rd
{
	void MenuInit()
	{
		ButtonInit();
		IsMousePressed();
	}

	void MenuDraw(Font font)
	{
		ButtonDraw();
		ButtonTextDraw(font);
	}
}