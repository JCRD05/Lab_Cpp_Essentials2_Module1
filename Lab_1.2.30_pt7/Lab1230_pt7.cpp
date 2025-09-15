#include <iostream>
#include "List.h";

int main()
{
	List list;

	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	std::cout << "Lista1\n";
	list.printList();
	std::cout << "\n";
	List list2(list);
	std::cout << "Lista2\n";
	list2.printList();
	std::cout << "\n";
	list2.pushBack(7);
	std::cout << "Lista1\n";
	list.printList();
	std::cout << "\n";
	std::cout << "Lista2\n";
	list2.printList();
	std::cout << "\n";
	std::cout << "Lista1\n";
	list.printList();
}