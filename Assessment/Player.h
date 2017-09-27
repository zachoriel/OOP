#pragma once

class Line
{
public:
	float startX;
	float startY;

	float endX;
	float endY;

	float x;
	float y;

	void update();
	void draw();
};