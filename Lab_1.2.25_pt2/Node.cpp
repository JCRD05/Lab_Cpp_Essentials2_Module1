#include <iostream>
#include "Node.h"

Node::Node(int value)
{
	this->value = value;
	this->next = nullptr;
	std::cout << "+Node\n";
}

Node::~Node()
{
	std::cout << "-Node\n";
}

int Node::getValue() const { return value; }

void Node::setValue(int value) { this->value = value; }

Node* Node::getNext() const { return next; }

void Node::setNext(Node* next) { this->next = next; }
