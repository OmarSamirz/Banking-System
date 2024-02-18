#ifndef REGULARLINKEDLIST_H
#define REGULARLINKEDLIST_H
#include "LinkedList.h"

class RegularLinkedList : public LinkedList {	//Concrete Class
public:
	RegularLinkedList();
	virtual ~RegularLinkedList() = default;
	virtual Node* getHead() override;
	virtual Node* getTail() override;
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s) override;
	void pushToOtherLists(User* u, Line& line, int lineNumber, void* s);
};

#endif // !REGULARLINKEDLIST_H


