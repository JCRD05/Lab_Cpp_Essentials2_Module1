#include <iostream>
#include <string>

class Square
{
public:
	Square(double side);
	double    side;
	double    area;
	// Your code here
};

Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}

void print(Square* square)
{
	std::cout << "Square: side = " << square->side << " area = " << square->area << "\n\n";
}


int main()
{
	Square s(4);


	print(&s);

	s.side = 2.0;
	print(&s);

	s.side = -33.0;
	print(&s);

	return 0;
}