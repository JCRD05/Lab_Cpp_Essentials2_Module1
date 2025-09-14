#include <iostream>
#include "Point2D.h"
#include "Line2D.h"

Point2D definePoint()
{
	double x{};
	double y{};
	
	std::cin >> x >> y;
	return Point2D(x, y);
}

int main()
{
	Point2D pointA = definePoint();
	Point2D pointB = definePoint();

	std:: cout << Line2D(pointA, pointB).toString();
}