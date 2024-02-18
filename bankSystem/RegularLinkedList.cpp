#include "RegularLinkedList.h"
#include "GoldLinkedList.h"
#include "AllServices.h"
#include "Services.h"


RegularLinkedList::RegularLinkedList() 
	: LinkedList{} {
}

Node* RegularLinkedList::getHead() {
	return LinkedList::getHead();
}

Node* RegularLinkedList::getTail() {
	return LinkedList::getTail();
}

void RegularLinkedList::pop(void* allServices) {
	if (allServices) {
		AllServices* services = (AllServices*)allServices;
		User u = this->getHead()->getData();
		services->pop(&u);
	}
	LinkedList::pop(allServices);
}

void RegularLinkedList::push(User *u, void* s)  {
	int lineNumber{ 1 };
	Services* service = (Services*)s;
	Line line;
	if (!this->getTail() && !service->GoldLinkedList::getTail()) {
		pushToOtherLists(u, line, lineNumber, s); 
	}
	if (this->getTail() && !service->GoldLinkedList::getTail()) {
		lineNumber = this->getTail()->getData().getLineNumber() + 1;
		pushToOtherLists(u, line, lineNumber, s);
	}
	if (!this->getTail() && service->GoldLinkedList::getTail()) {
		lineNumber = service->GoldLinkedList::getTail()->getData().getLineNumber() + 1;
		pushToOtherLists(u, line, lineNumber, s);
	}
	if (this->getTail() && service->GoldLinkedList::getTail()) {
		int lineNumber1 = this->getTail()->getData().getLineNumber();
		int lineNumber2 = service->GoldLinkedList::getTail()->getData().getLineNumber();
		lineNumber = (lineNumber1 >= lineNumber2) ? lineNumber1 + 1 : lineNumber2 + 1;
		pushToOtherLists(u, line, lineNumber, s);
	}

	u->createUserFile();
	LinkedList::push(u, s);
}

void RegularLinkedList::pushToOtherLists(User* u, Line& line, int lineNumber, void* s) {
	Services* service = (Services*)s;
	u->setLineNumber(lineNumber);
	service->getQueue().push(lineNumber);
	line.setLineNumber(lineNumber);
	line.incrementNumberOfUsers();
	service->getVector().push_back(line);
}