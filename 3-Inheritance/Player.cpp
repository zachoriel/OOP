#include "Player.h"

#include "sfwdraw.h"

void Player::update()
{
	if (sfw::getKey('W')) { y++; }
	if (sfw::getKey('A')) { x--; }
	if (sfw::getKey('S')) { y--; }
	if (sfw::getKey('D')) { x++; }

	// wrap
	if (x < 0) { x = 800; }
	if (x > 800) { x = 0; }
	if (x < 0) { x = 600; }
	if (x > 600) { x = 0; }
}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}