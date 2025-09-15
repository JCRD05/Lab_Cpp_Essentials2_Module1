#include <iostream>
#include "Node.h"

Node::Node(int value)
{
	this->value = value;
	this->next = nullptr;
	this->prev = nullptr;
}

Node::~Node(){}

int Node::getValue() const { return value; }

void Node::setValue(int value) { this->value = value; }

Node* Node::getNext() const { return next; }

void Node::setNext(Node* next) { this->next = next; }

Node* Node::getPrev() const { return prev; }

void Node::setPrev(Node* prev) { this->prev = prev; }
