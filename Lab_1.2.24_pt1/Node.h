#pragma once
class Node
{
private:
	int value{};
	Node* next{};

public:
	Node(int value);
	int getValue() const;
	void setValue(int value);
	Node* getNext() const;
	void setNext(Node* next);
};

