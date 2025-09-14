#include <iostream>
#include "List.h"

List::List()
{
	head = nullptr;
	size = 0;
}

List::~List()
{
	while (head != nullptr)
	{
		Node* actual = head;
		head = head->getNext();
		delete actual;
	}
	std::cout << "List Cleared\n";
}

void List::pushFront(int value)
{
	Node* newHead = new Node(value);
	newHead->setNext(head);
	head = newHead;
	std::cout << "pushed " << value << " size " << ++size << "\n";
}

bool List::popFront(int &value)
{
	if (head != nullptr)
	{
		Node* popped = head;
		head = head->getNext();
		value = popped->getValue();
		delete popped;
		std::cout << "popped " << value << " size " << --size << "\n";
		return true;
	}
	else
	{
		std::cout << "Empty List\n";
		return false;
	}
}

int List::getSize() { return size; }
