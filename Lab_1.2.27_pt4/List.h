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
	void pushFront(int value);
	void pushBack(int value);
	bool popFront(int &value);
	int getSize();
};

