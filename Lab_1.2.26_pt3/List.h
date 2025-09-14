#include "Node.h"
#pragma once
class List
{
private:
	Node* head{};
	size_t size{};

public:
	List();
	~List();
	void pushFront(int value);
	bool popFront(int &value);
	int getSize();
};

