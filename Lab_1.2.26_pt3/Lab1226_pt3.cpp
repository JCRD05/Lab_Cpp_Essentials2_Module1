#include <iostream>
#include "List.h";

int main()
{
	List list;

	list.pushFront(1);
	list.pushFront(2);
	list.pushFront(3);
	int value;
	list.popFront(value);
	list.popFront(value);
	list.popFront(value);
}