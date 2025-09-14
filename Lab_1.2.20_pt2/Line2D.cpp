#include <iostream>
#include <string>
#include <math.h>
#include "Line2D.h"

Line2D::Line2D(double slope, double yIntersection)
{
	this->slope = slope;
	this->yIntersection = yIntersection;
}

Line2D::Line2D(Point2D a, Point2D b)
{
	slope = (b.getY() - a.getY()) / (b.getX() - a.getX());
	yIntersection = a.getY() - slope * a.getX();
}

std::string Line2D::toString()
{
	std::string line{"y = "};

	if (slope < -1) 
	{
		line += std::to_string(slope);
		line += "x ";
	}
	else if (slope == 0) { return line += std::to_string(yIntersection);}
	else if (slope == 1) { line += "x "; }
	else if (slope == -1) { line += "-x "; }
	else
	{ 
		line += std::to_string(slope);
		line += "x ";
	}

	if (yIntersection < 0)
	{
		line += "- ";
		line += std::to_string(fabs(yIntersection));
	}
	else if (yIntersection == 0) { return line; }
	else
	{
		line += "+ ";
		line += std::to_string(yIntersection);
	}
	return line;
}
