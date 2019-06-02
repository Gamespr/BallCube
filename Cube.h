#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
private:
	double lenght;
public:
	Cube();
	Cube(double);
	Cube(double, const string &);
	void setLenght(double);
	double getLenght();
	double getArea();
	double getVolume();

};
#endif