#pragma once
class Node
{
private:
	int value{};
	Node* next{};
	Node* prev{};

public:
	Node(int value);
	~Node();
	int getValue() const;
	void setValue(int value);
	Node* getNext() const;
	void setNext(Node* next);
	Node* getPrev() const;
	void setPrev(Node* prev);
};

