#pragma once
class Point2D
{
private:
	double x{};
	double y{};

public:
	Point2D(double x, double y);
	double distance(Point2D point);
	double getX();
	double getY();
};

