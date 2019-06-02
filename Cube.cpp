#include "Cube.h"

Cube::Cube()
{
	lenght = 1;
}

Cube::Cube(double lenght)
{
	this->lenght = lenght;
}

Cube::Cube(double lenght, const string &color)
{
	this->lenght = lenght;
	setColor(color);
}

void Cube::setLenght(double lenght)
{
	this->lenght = lenght;
}

double Cube::getLenght()
{
	return lenght;
}

double Cube::getArea()
{
	return 6*(lenght*lenght);
}

double Cube::getVolume()
{
	return lenght*lenght*lenght;
}
