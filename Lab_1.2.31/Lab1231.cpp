#include <iostream>
#include "List.h";

int main()
{
	List list;

	list.pushBack(1);
	list.pushFront(2);
	list.insertAt(1, 2);
	std::cout << "Lista\n";
	list.printList();
	std::cout << "\n";

	int value{};
	list.popBack(value);
	std::cout << "Lista\n";
	list.printList();
	std::cout << "\n";
	
	list.popFront(value);
	std::cout << "Lista\n";
	list.printList();
	std::cout << "\n";

	list.pushBack(1);
	list.pushFront(2);
	list.insertAt(1, 2);
	std::cout << "Lista\n";
	list.printList();
	std::cout << "\n";

	list.removeAt(1, value);
	std::cout << "Lista\n";
	list.printList();
	std::cout << "\n";

	std::cout << "Lista\n";
	list.printListBackwards();
	std::cout << "\n";

	List list2 = list;
	std::cout << "Lista 2\n";
	list.printList();
	std::cout << "\n";

	list2.popFront(value);
	std::cout << "Lista\n";
	list.printList();
	std::cout << "\n";

	std::cout << "Lista 2\n";
	list2.printList();
	std::cout << "\n";
}