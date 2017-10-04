// NOTE: Collision was working, and then I changed one thing, and now it's suddenly not working. And I'm completely out of time because the project is due now. :(

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

	one.x = 390;
	one.y = 290;

	PlayerTwo two;		// Player 2 starting position

	two.x = 410;
	two.y = 310;

	Line line;			// Boundaries (cont. through LineFour)

	line.startX = 5;
	line.endX = 795;
	line.startY = 595;
	line.endY = 595;

	LineTwo linetwo;

	linetwo.startX = 5;
	linetwo.endX = 795;
	linetwo.startY = 5;
	linetwo.endY = 5;

	LineThree linethree;

	linethree.startX = 5;
	linethree.endX = 5;
	linethree.startY = 5;
	linethree.endY = 595;

	LineFour linefour;

	linefour.startX = 795;
	linefour.endX = 795;
	linefour.startY = 595;
	linefour.endY = 5;

	ObstacleOne obs1;	// OBSTACLES

	obs1.startX = 370;
	obs1.endX = 430;
	obs1.startY = 330;
	obs1.endY = 330;

	ObstacleTwo obs2;

	obs2.startX = 370;
	obs2.endX = 430;
	obs2.startY = 270;
	obs2.endY = 270;

	ObstacleThree obs3;

	obs3.startX = 465;
	obs3.endX = 420;
	obs3.startY = 340;
	obs3.endY = 390;

	ObstacleFour obs4;

	obs4.startX = 370;
	obs4.endX = 430;
	obs4.startY = 530;
	obs4.endY = 530;

	ObstacleFive obs5;

	obs5.startX = 370;
	obs5.endX = 430;
	obs5.startY = 70;
	obs5.endY = 70;

	ObstacleSix obs6;

	obs6.startX = 335;
	obs6.endX = 380;
	obs6.startY = 260;
	obs6.endY = 210;

	ObstacleSeven obs7;

	obs7.startX = 380;
	obs7.endX = 380;
	obs7.startY = 340;
	obs7.endY = 420;

	ObstacleEight obs8;

	obs8.startX = 380;
	obs8.endX = 480;
	obs8.startY = 420;
	obs8.endY = 420;

	ObstacleNine obs9;

	obs9.startX = 445;
	obs9.endX = 475;
	obs9.startY = 300;
	obs9.endY = 320;

	ObstacleTen obs10;

	obs10.startX = 360;
	obs10.endX = 350;
	obs10.startY = 430;
	obs10.endY = 520;

	ObstacleEleven obs11;

	obs11.startX = 420;
	obs11.endX = 420;
	obs11.startY = 435;
	obs11.endY = 530;

	ObstacleTwelve obs12;

	obs12.startX = 420;
	obs12.endX = 420;
	obs12.startY = 260;
	obs12.endY = 180;

	ObstacleThirteen obs13;

	obs13.startX = 420;
	obs13.endX = 320;
	obs13.startY = 180;
	obs13.endY = 180;

	ObstacleFourteen obs14;

	obs14.startX = 440;
	obs14.endX = 450;
	obs14.startY = 170;
	obs14.endY = 80;

	ObstacleFifteen obs15;

	obs15.startX = 380;
	obs15.endX = 380;
	obs15.startY = 165;
	obs15.endY = 70;

	Goal box;
	box.startX = 380;
	box.endX = 420;
	box.startY = 595;
	box.endY = 595;
	box.startX2 = 420;
	box.endX2 = 420;
	box.startY2 = 595;
	box.endY2 = 565;
	box.startX3 = 380;
	box.endX3 = 380;
	box.startY3 = 595;
	box.endY3 = 565;

	GoalTwo goal;
	goal.startX = 380;
	goal.endX = 420;
	goal.startY = 5;
	goal.endY = 5;
	goal.startX2 = 420;
	goal.endX2 = 420;
	goal.startY2 = 35;
	goal.endY2 = 5;
	goal.startX3 = 380;
	goal.endX3 = 380;
	goal.startY3 = 35;
	goal.endY3 = 5; 

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

		obs1.draw();
		obs2.draw();
		obs3.draw();
		obs4.draw();
		obs5.draw();
		obs6.draw();
		obs7.draw();
		obs8.draw();
		obs9.draw();
		obs10.draw();
		obs11.draw();
		obs12.draw();
		obs13.draw();
		obs14.draw();
		obs15.draw();

		box.draw();
		goal.draw();

		if (one.x < 5)		// Resets players in center if collided with boundaries/goal boxes
		{
			one.x = 400;
			one.y = 300;
		}
		if (two.x < 5)
		{
			two.x = 400;
			two.y = 300;
		}
		if (one.x > 795)
		{
			one.x = 400;
			one.y = 300;
		}
		if (two.x > 795)
		{
			two.x = 400;
			two.y = 300;
		}
		if (one.y < 5)
		{
			one.y = 300;
			one.x = 400;
		}
		if (two.y < 5)
		{
			two.y = 300;
			two.x = 400;
		}
		if (one.y > 595)
		{
			one.y = 300;
			one.x = 400;
		}
		if (two.y > 595)
		{
			two.y = 300;
			two.x = 400;
		}

		if ((one.x > 399) && (one.y > 329) && (one.x < 401) && (one.y < 331))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((two.x > 399) && (two.y > 269) && (two.x < 401) && (two.y < 271))
		{
			two.x = 400;
			two.y = 300;
		}
		if ((one.x > 464) && (one.y > 339) && (one.x < 466) && (one.y < 341))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((one.x > 369) && (one.y > 529) && (one.x < 371) && (one.y < 531))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((two.x > 369) && (two.y > 69) && (two.x < 371) && (two.y < 71))
		{
			two.x = 400;
			two.y = 300;
		}
		if ((two.x > 334) && (two.y > 259) && (two.x < 336) && (two.y < 261))
		{
			two.x = 400;
			two.y = 300;
		}
		if ((one.x > 379) && (one.y > 339) && (one.x < 381) && (one.y < 341))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((one.x > 379) && (one.y > 419) && (one.x < 381) && (one.y < 421))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((one.x > 444) && (one.y > 299) && (one.x < 446) && (one.y < 301))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((one.x > 359) && (one.y > 429) && (one.x < 361) && (one.y < 431))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((one.x > 419) && (one.y > 434) && (one.x < 421) && (one.y < 436))
		{
			one.x = 400;
			one.y = 300;
		}
		if ((two.x > 419) && (two.y > 259) && (two.x < 421) && (two.y < 261))
		{
			two.x = 400;
			two.y = 300;
		}
		if ((two.x > 419) && (two.y > 179) && (two.x < 421) && (two.y < 181))
		{
			two.x = 400;
			two.y = 300;
		}
		if ((two.x > 439) && (two.y > 169) && (two.x < 441) && (two.y < 171))
		{
			two.x = 400;
			two.y = 300;
		}
		if ((two.x > 379) && (two.y > 164) && (two.x < 381) && (two.y < 166))
		{
			two.x = 400;
			two.y = 300;
		}
	}

	// Clean code = happy code :)
	sfw::termContext();
}