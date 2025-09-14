#include "Node.h"
#pragma once
class List
{
private:
	Node* head{};

public:
	List();
	~List();
	void pushFront(int value);
	bool popFront(int &value);
};

