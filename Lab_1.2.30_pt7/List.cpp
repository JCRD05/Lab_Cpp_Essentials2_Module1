#include <iostream>
#include "List.h"

List::List()
{
	head = nullptr;
	tail = nullptr;
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

List::List(List& original) : List()
{
	Node* node = original.head;
	while (node != nullptr) {
		pushBack(node->getValue());
		node = node->getNext();
	}
}

void List::pushFront(int value)
{
	Node* newHead = new Node(value);
	newHead->setNext(head);
	head = newHead;
	if (tail == nullptr)
	{
		tail = head;
	}
	size++;
}

void List::pushBack(int value)
{
	Node* newTail = new Node(value);
	if (head == nullptr)
	{
		head = newTail;
		tail = newTail;
	}
	else
	{
		tail->setNext(newTail);
		tail = newTail;
	}
	size++;
}

void List::insertAt(int index, int value)
{
	if (index == 0)
	{
		pushFront(value);
	}
	else if (index == size)
	{
		pushBack(value);
	}
	else if (index > size)
	{
		std::cout << "index is bigger than list\n";
	}
	else if (index < 0)
	{
		std::cout << "index has to be positive\n";
	}
	else
	{
		Node* node = new Node(value);
		Node* before = head;
		for (int i = 1; i < index; i++)
		{
			before = before->getNext();
		}
		node->setNext(before->getNext());
		before->setNext(node);

		if (node->getNext() == nullptr)
		{
			tail = node;
		}
		size++;
	}
}

bool List::popFront(int &value)
{
	if (head != nullptr)
	{
		Node* popped = head;
		head = head->getNext();
		if (head == nullptr)
		{
			tail = nullptr;
		}
		value = popped->getValue();
		delete popped;
		size--;
		return true;
	}
	else
	{
		std::cout << "Empty List\n";
		return false;
	}
}

bool List::popBack(int& value)
{
	if (head != nullptr)
	{
		Node* node = head;
		if (node == tail)
		{
			value = node->getValue();
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			while (node->getNext() != tail)
			{
				node = node->getNext();
			}

			value = tail->getValue();
			node->setNext(nullptr);
			delete tail;
			tail = node;
		}
		size--;
		return true;
	}
	else
	{
		std::cout << "Empty List\n";
		return false;
	}
}

bool List::removeAt(int index, int& value)
{
	if (head != nullptr)
	{
		if (index == 0)
		{
			popFront(value);
		}
		else if (index == size)
		{
			popBack(value);
		}
		else if (index > size)
		{
			std::cout << "index is bigger than list\n";
		}
		else if (index < 0)
		{
			std::cout << "index has to be positive\n";
		}
		else
		{
			Node* before = head;
			for (int i = 1; i < index; i++)
			{
				before = before->getNext();
			}
			Node* node = before->getNext();
			value = node->getValue();
			before->setNext(node->getNext());
			delete node;
			size--;
		}
		return true;
	}
	else
	{
		std::cout << "Empty List\n";
		return false;
	}
}

int List::at(int index)
{
	Node* node = head;
	for (int i = 1; i <= index; i++)
	{
		node = node->getNext();
	}
	return node->getValue();
}

int List::getSize() { return (int)size; }

void List::printList()
{
	Node* node = head;
	for (int i = 0; i < size; i++)
	{
		std::cout << "List[" << i << "] = " << node->getValue() << "\n";
		node = node->getNext();
	}
}
