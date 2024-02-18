#ifndef GOLDLINKEDLIST_h
#define GOLDLINKEDLIST_h
#include "LinkedList.h"

class GoldLinkedList : public LinkedList {	//Concrete Class
public:
	GoldLinkedList();
	virtual ~GoldLinkedList() = default;
	virtual Node* getHead() override;
	virtual Node* getTail() override;
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s)  override;
	void pushToOtherLists(User* u, Line& line, int lineNumber, void* s);
};

#endif // !GOLDLINKEDLIST_h
