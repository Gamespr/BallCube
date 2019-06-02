#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
private:
	double radius;
public:
	Ball();
	Ball(double);
	Ball(double, const string &);
	void setRadius(double);
	double getRadius();
	double getArea();
	double getVolume();
};
#endif