#include "Node.h"
#pragma once
class List
{
private:
	Node* head{};
	Node* tail{};
	size_t size{};

public:
	List();
	~List();
	List(List& original);
	void pushFront(int value);
	void pushBack(int value);
	void insertAt(int index, int value);
	bool popFront(int &value);
	bool popBack(int &value);
	bool removeAt(int index, int &value);
	int at(int index);
	int getSize();
	void printList();
};

