#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	string c, d;
	cin >> a >> c >> b >> d;

	Ball ball(a);
	ball.setColor(c);
	cout << "Ball"<< endl << "radius:" << ball.getRadius() << ", " << "area:" << fixed << setprecision(1) << ball.getArea() << "," << "volume:" << ball.getVolume() << "," << "color:" << ball.getColor()<<endl;

	Cube cube(b);
	cube.setColor(d);
	cout << "Cube" << endl << "length:" << fixed << setprecision(0) << cube.getLenght() << "," << "area:" << fixed << setprecision(1) << cube.getArea() << "," << "volume:" << fixed << setprecision(1) << cube.getVolume() << "," << "color:" << cube.getColor() << endl;

	system("pause");
}