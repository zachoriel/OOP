#include <iostream>

#include "sfwdraw.h"

#include "Player.h"

int main()
{
	// Create a winbdow and a drawing context
	sfw::initContext(800, 600, "SFW");

	// Set the background color
	sfw::setBackgroundColor(BLACK);

	Line line;

	line.startX = 400;
	line.endX = 400;
	line.startY = 300;
	line.endY = 450;

	while (sfw::stepContext())
	{
		line.update();
		line.draw();

		if (line.x < 0)
		{
			line.x = 800;
		}
		if (line.x < 0)
		{
			line.x = 800;
		}
		if (line.x > 800)
		{
			line.x = 0;
		}
		if (line.x > 800)
		{
			line.x = 0;
		}
		if (line.y < 0)
		{
			line.y = 600;
		}
		if (line.y < 0)
		{
			line.y = 600;
		}
		if (line.y > 600)
		{
			line.y = 0;
		}
		if (line.y > 600)
		{
			line.y = 0;
		}
	}

	sfw::termContext();
























}