#include "Player.h"

#include "sfwdraw.h"

void Line::update()
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

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}