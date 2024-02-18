#include "LinkedList.h"

Node::Node() 
	: data{}, next{ nullptr } {
}

Node::Node(User u) 
	: data{ u }, next{ nullptr } {
}

Node::~Node() {
}

void Node::setNext(Node* n) {
	next = n;
}

User Node::getData() {
	return data;
}

Node* Node::getNext() {
	return next;
}

LinkedList::LinkedList() 
	: head{ nullptr }, tail{ nullptr } {
}

LinkedList::~LinkedList() {
	delete head;
	delete tail;
}

Node* LinkedList::getHead() {
	return head;
}

Node* LinkedList::getTail() {
	return tail;
}

void LinkedList::pop(void* allServices) {
	if (!head)
		return;

	Node* curr = head;
	head = head->getNext();
	if (head == nullptr)
		tail = head;
	delete curr;
}

void LinkedList::push(User *u, void* s)  {
	Node* newNode = new Node{ *u };
	if (!head)
		head = tail = newNode;
	else {
		tail->setNext(newNode);
		tail = newNode;
	}
}