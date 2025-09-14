#include <math.h>
#include "Point2D.h"

Point2D::Point2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point2D::distance(Point2D point)
{
	double dx = fabs(x - point.x);
	double dy = fabs(y - point.y);
	return sqrt(dx*dx + dy*dy);
}

double Point2D::getX(){ return x; }

double Point2D::getY(){ return y; }
