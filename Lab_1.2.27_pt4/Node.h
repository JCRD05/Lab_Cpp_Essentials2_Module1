#pragma once
class Node
{
private:
	int value{};
	Node* next{};

public:
	Node(int value);
	~Node();
	int getValue() const;
	void setValue(int value);
	Node* getNext() const;
	void setNext(Node* next);
};

