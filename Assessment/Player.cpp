#include "Player.h"

#include "sfwdraw.h"

void Player::update()
{
	if (sfw::getKey('W'))
	{
		y++;
	}
	if (sfw::getKey('S'))
	{
		y--;
	}
	if (sfw::getKey('A'))
	{
		x--;
	}
	if (sfw::getKey('D'))
	{
		x++;
	}
}

void PlayerTwo::update()
{
	if (sfw::getKey('I'))
	{
		y++;
	}
	if (sfw::getKey('K'))
	{
		y--;
	}
	if (sfw::getKey('J'))
	{
		x--;
	}
	if (sfw::getKey('L'))
	{
		x++;
	}
}

void Player::draw()
{
	sfw::drawCircle(x, y, 10);
}

void PlayerTwo::draw()
{
	sfw::drawCircle(x, y, 10);
}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void LineTwo::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void LineThree::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void LineFour::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void ObstacleOne::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void ObstacleTwo::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void ObstacleThree::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void ObstacleFour::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void ObstacleFive::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void Goal::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
	sfw::drawLine(startX2, startY2, endX2, endY2);
	sfw::drawLine(startX3, startY3, endX3, endY3);
}

void GoalTwo::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
	sfw::drawLine(startX2, startY2, endX2, endY2);
	sfw::drawLine(startX3, startY3, endX3, endY3);
}