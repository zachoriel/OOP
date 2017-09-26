#pragma once

class Player
{
public:
	float x;    // x-pos
	float y;    // y-pos

	void update();
	void draw();
};

class PlayerTwo
{
public:
	float x;    // x-pos
	float y;    // y-pos

	void update();
	void draw();
};

class Circle
{
public:
	float posX;
	float posY;

	float radius;

	void draw();
};

class Line
{
public:
	float startX;
	float startY;

	float endX;
	float endY;

	void draw();
};

class Box
{
public:
	float startX;
	float startY;

	float endX;
	float endY;

	float startX2;
	float startY2;

	float endX2;
	float endY2;

	float startX3;
	float startY3;

	float endX3;
	float endY3;

	float startX4;
	float startY4;

	float endX4;
	float endY4;

	void draw();
};