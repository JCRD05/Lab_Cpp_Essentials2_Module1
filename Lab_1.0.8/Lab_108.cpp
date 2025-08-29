#include <iostream>
#include <string>

class Square
{
private:
	double side;
	double area;
public:
	Square(double side);
	void set_side(int side);
	double get_area();
	void print(Square* square);
};

Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}

void Square::set_side(int side)
{
	if (side < 0) { return; }

	this->side = side;
}

double Square::get_area()
{
	area = side * side;
	return area;
}

void Square::print(Square* square)
{
	std::cout << "Square: side = " << square->side << " area = " << get_area() << "\n\n";
}


int main()
{
	Square s(4);

	s.print(&s);

	s.set_side(2.0);
	s.print(&s);

	s.set_side(-33.0);
	s.print(&s);

	return 0;
}