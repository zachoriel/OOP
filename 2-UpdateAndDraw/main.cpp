#include <iostream>

#include "sfwdraw.h"

#include "Player.h"

int main()
{
	// Create a winbdow and a drawing context
	sfw::initContext(800, 600, "SFW");

	// Set the background color
	sfw::setBackgroundColor(BLUE);

	Player one;

	one.x = 200;
	one.y = 150;

	PlayerTwo two;

	two.x = 600;
	two.y = 450;

	Circle circle;

	circle.posX = 400;
	circle.posY = 300;

	Line line;

	line.startX = 400;
	line.endX = 400;
	line.startY = 300;
	line.endY = 450;

	Box box;

	box.startX = 350;
	box.endX = 450;
	box.startY = 500;
	box.endY = 500;
	box.startX2 = 450;
	box.endX2 = 450;
	box.startY2 = 500;
	box.endY2 = 400;
	box.startX3 = 450;
	box.endX3 = 350;
	box.startY3 = 400;
	box.endY3 = 400;
	box.startX4 = 350;
	box.endX4 = 350;
	box.startY4 = 400;
	box.endY4 = 500;

	// Set up the game loop
	while (sfw::stepContext())
	{
		// game code goes here
		//sfw::drawCircle(400, 300, 70);

		one.update();
		one.draw();
		two.update();
		two.draw();

		circle.draw();

		line.draw();

		box.draw();

		if (one.x < 0)
		{
			one.x = 800;
		}
		if (two.x < 0)
		{
			two.x = 800;
		}
		if (one.x > 800)
		{
			one.x = 0;
		}
		if (two.x > 800)
		{
			two.x = 0;
		}
		if (one.y < 0)
		{
			one.y = 600;
		}
		if (two.y < 0)
		{
			two.y = 600;
		}
		if (one.y > 600)
		{
			one.y = 0;
		}
		if (two.y > 600)
		{
			two.y = 0;
		}
	}

	// Clean up
	sfw::termContext();
}