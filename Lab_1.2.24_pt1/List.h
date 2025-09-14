#include "Node.h"
#pragma once
class List
{
private:
	Node* head{};

public:
	List();
	void pushFront(int value);
	bool popFront(int &value);
};

