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
	sfw::drawCircle(x, y, 25);
}

void PlayerTwo::draw()
{
	sfw::drawCircle(x, y, 25);
}

void Circle::draw()
{
	sfw::drawCircle(posX, posY, 15);
}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void Box::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
	sfw::drawLine(startX2, startY2, endX2, endY2);
	sfw::drawLine(startX3, startY3, endX3, endY3);
	sfw::drawLine(startX4, startY4, endX4, endY4);
}