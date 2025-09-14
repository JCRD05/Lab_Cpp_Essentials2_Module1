#include "Point2D.h"
#pragma once
class Line2D
{
private:
	double slope{};
	double yIntersection{};

public:
	Line2D(double slope, double yIntersection);
	Line2D(Point2D a, Point2D b);
	std::string toString();
	bool contains(Point2D a);
};

