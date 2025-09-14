#include <iostream>
#include "List.h";

int main()
{
	List list;

	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	int value;
	list.popBack(value);
	list.popBack(value);
	list.popBack(value);
}