#include <iostream>
#include "List.h";

int main()
{
	List list;

	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	list.printList();
	std::cout << "\n";
	int value;
	list.removeAt(1, value);
	list.printList();
	std::cout << "\n";
	list.insertAt(2, 3);
	list.printList();
}