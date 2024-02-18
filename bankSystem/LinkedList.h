#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <vector>
#include <queue>
#include "User.h"
#include "Line.h"

class Node {
protected:
	User data;
	Node* next;
public:
	Node();
	Node(User);
	void setNext(Node* n);
	User getData();
	Node* getNext();
	~Node();
};

class LinkedList { //Abstract Class
protected:
	Node* head, * tail;
public:
	LinkedList();
	virtual ~LinkedList();
	virtual Node* getHead();
	virtual Node* getTail();
	virtual void pop(void* allServices) = 0;
	virtual void push(User *u, void* s) = 0;
};

#endif // !LINKEDLIST_H