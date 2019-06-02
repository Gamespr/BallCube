#include "Ball.h"

Ball::Ball()
{
	radius = 1;
}

Ball::Ball(double radius)
{
	this->radius = radius;
}

Ball::Ball(double radious, const string &color)
{
	this->radius = radius;
	setColor(color);
}

void Ball::setRadius(double radius)
{
	this->radius = radius;
}

double Ball::getRadius()
{
	return radius;
}

double Ball::getArea()
{
	return radius*radius*4*3.14159;
}

double Ball::getVolume()
{
	return ((radius*radius*radius)*3.14159 * 4) / 3;
}
