#include <iostream>
#include "List.h"

List::List()
{
	head = nullptr;
}

void List::pushFront(int value)
{
	Node* newHead = new Node(value);
	newHead->setNext(head);
	head = newHead;
}

bool List::popFront(int &value)
{
	if (head != nullptr)
	{
		Node* popped = head;
		head = head->getNext();
		value = popped->getValue();
		delete popped;
		return true;
	}
	else
	{
		std::cout << "Empty List\n";
		return false;
	}
}
