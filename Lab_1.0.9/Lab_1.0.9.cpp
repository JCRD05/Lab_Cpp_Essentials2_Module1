#include <iostream>

class AdHocSquare
{
public:
	AdHocSquare(double side);
	void set_side(double side);
	double get_area();
private:
	double side;
};

AdHocSquare::AdHocSquare(double side)
{
	this->side = side;
}

void AdHocSquare::set_side(double side)
{
	if (side < 0) { return; }

	this->side = side;
}

double AdHocSquare::get_area()
{
	return side * side;
}

class LazySquare
{
public:
	LazySquare(double side);
	void set_side(double side);
	double get_area();
private:
	double side;
	double area;
	bool side_changed;
};

LazySquare::LazySquare(double side)
{
	this->side = side;
	area = side * side;
	side_changed = true;
}

void LazySquare::set_side(double side)
{
	if (side < 0) { return; }

	this->side = side;
	side_changed = true;
}

double LazySquare::get_area()
{
	if (side_changed == false) { return area; }

	area = side * side;
	side_changed = false;
	return area;
}

int main()
{
	AdHocSquare Square1(4);
	std::cout << "Square 1 area = " << Square1.get_area() << "\n";

	Square1.set_side(5);
	std::cout << "Square 1 area = " << Square1.get_area() << "\n\n";

	LazySquare Square2(4);
	std::cout << "Square 2 area = " << Square2.get_area() << "\n";

	Square2.set_side(5);
	std::cout << "Square 2 area = " << Square2.get_area() << "\n";
	std::cout << "Square 2 area = " << Square2.get_area() << "\n";

	Square2.set_side(6);
	std::cout << "Square 2 area = " << Square2.get_area() << "\n";
}