#include <iostream>
#include <string>

class Person
{
public:
	std::string name;
	int age;
	int weight;
	float height;
};

void print(Person* person)
{
	std::cout << person->name << " is " << person->age << " years old, he weights "
		<< person->weight << " kg and is " << person->height << " meters tall\n\n";
}


int main()
{
	Person person1;
	person1.name = "Jose Carlos";
	person1.age = 20;
	person1.weight = 90;
	person1.height = 1.80;

	std::cout << "Meet " << person1.name << "\n";
	print(&person1);

	Person person2;
	person2.name = "Valerie";
	person2.age = 19;
	person2.weight = 60;
	person2.height = 1.66;

	std::cout << "Meet " << person2.name << "\n";
	print(&person2);

	Person person3;
	person3.name = "Anton";
	person3.age = 20;
	person3.weight = 81;
	person3.height = 1.65;

	std::cout << "Meet " << person3.name << "\n";
	print(&person3);

	return 0;
}