#include <iostream>

#include "sfwdraw.h"

#include "Player.h"

int main()
{
	// Game window
	sfw::initContext(800, 600, "SFW");

	// Background colour
	sfw::setBackgroundColor(BLUE);

	Player one;		// Player 1 starting position

	one.x = 200;
	one.y = 150;

	PlayerTwo two;		// Player 2 starting position

	two.x = 600;
	two.y = 450;

	Line line;			// Boundaries (cont. through LineFour)

	line.startX = 1;
	line.endX = 799;
	line.startY = 599;
	line.endY = 599;

	LineTwo linetwo;

	linetwo.startX = 0;
	linetwo.endX = 800;
	linetwo.startY = 0;
	linetwo.endY = 0;

	LineThree linethree;

	linethree.startX = 0;
	linethree.endX = 0;
	linethree.startY = 0;
	linethree.endY = 600;

	LineFour linefour;

	linefour.startX = 800;
	linefour.endX = 800;
	linefour.startY = 600;
	linefour.endY = 0;

	ObstacleOne obestacleone;	// OBSTACLES

								// START/END

	Goal box;
	// Suboptimal goal-post positioning. Numerical revaluation recommended. 
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

	GoalTwo goal;
	// TRANSFORM & TRANSLATE BRUH
	goal.startX = 350;
	goal.endX = 450;
	goal.startY = 500;
	goal.endY = 500;
	goal.startX2 = 450;
	goal.endX2 = 450;
	goal.startY2 = 500;
	goal.endY2 = 400;
	goal.startX3 = 450;
	goal.endX3 = 350;
	goal.startY3 = 400;
	goal.endY3 = 400;

	// Game loop
	while (sfw::stepContext())
	{
		one.update();
		one.draw();
		two.update();
		two.draw();

		line.draw();
		linetwo.draw();
		linethree.draw();
		linefour.draw();

		box.draw();
		goal.draw();

		if (one.x < 0)		// Resets players in center if collided with boundaries/goal boxes
		{
			one.x = 400;
		}
		if (two.x < 0)
		{
			two.x = 400;
		}
		if (one.x > 800)
		{
			one.x = 400;
		}
		if (two.x > 800)
		{
			two.x = 400;
		}
		if (one.y < 0)
		{
			one.y = 300;
		}
		if (two.y < 0)
		{
			two.y = 300;
		}
		if (one.y > 600)
		{
			one.y = 300;
		}
		if (two.y > 600)
		{
			two.y = 300;
		}

		// ADD GOAL BOX COLLISION & PLAYER RESET (Finish goal boxes first)
	}

	// Clean code = happy code :)
	sfw::termContext();
}

// YO DON'T PUSH TO THE REPOSITORY, COPY/PASTE TO GITHUB THEN CLONE ON SCHOOL COMP.

// File IO stuff for the sake of looking like I put in more effort than I really did.

// int PlayerWins = 0 or something - times one.x/y = whatever top goal post ends up being.
// int PlayerTwoWins = 0  - times two.x/y = whatever bottom goal post ends up being.
// int PlayerLosses = 0 - same as TwoWins & times player hit boundaries.
// int PlayerTwoLosses = 0 - same as PlayerWins & times player hit boundaries.
// if (one.x/y = whatever) { PlayerWins ++ }
// more if statements (not else if). Don't forget touching boundaries losses. 