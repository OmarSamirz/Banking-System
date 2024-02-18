#include "GoldLinkedList.h"
#include "RegularLinkedList.h"
#include "AllServices.h"
#include "Services.h"

GoldLinkedList::GoldLinkedList() 
	: LinkedList{} {
}

Node* GoldLinkedList::getHead() {
	return LinkedList::getHead();
}

Node* GoldLinkedList::getTail() {
	return LinkedList::getTail();
}

void GoldLinkedList::pop(void* allServices) {
	if (allServices) {
		AllServices* services = (AllServices*)allServices;
		User u = this->getHead()->getData();
		services->pop(&u);
	}
	LinkedList::pop(allServices);
}

void GoldLinkedList::push(User *u, void* s)  {
	int lineNumber{ 1 };
	Services* service = (Services*)s;
	size_t vecSize = service->getVector().size() - 1;
	Line line;
	if (!this->getTail() && !service->RegularLinkedList::getTail()) {
		pushToOtherLists(u, line, lineNumber, s);
	}
	if (this->getTail() && !service->RegularLinkedList::getTail()) {
		lineNumber = this->getTail()->getData().getLineNumber() + 1;
		pushToOtherLists(u, line, lineNumber, s);
	}
	if (!this->getTail() && service->RegularLinkedList::getTail()) {
		lineNumber = service->RegularLinkedList::getTail()->getData().getLineNumber();
		if (lineNumber == 1 && service->getVector().at(vecSize).getIsGoldUser() == false)
			pushToOtherLists(u, line, lineNumber, s);
		else if (service->getVector().size() > 1) {
			if (service->getVector().at(vecSize - 1).getIsGoldUser() == false && (lineNumber - 1 == service->getVector().at(vecSize - 1).getLineNumber()))
				pushToOtherLists(u, line, lineNumber - 1, s);
		}
		else if (service->getVector().at(vecSize).getIsGoldUser() == false) {
			lineNumber = service->getVector().at(vecSize).getLineNumber();
			pushToOtherLists(u, line, lineNumber, s);
		}
		else
			pushToOtherLists(u, line, lineNumber + 1, s);
	}
	if (this->getTail() && service->RegularLinkedList::getTail()) {
		int lineNumber1{}, lineNumber2{};
		lineNumber1 = this->getTail()->getData().getLineNumber();
		if (service->RegularLinkedList::getTail())
			lineNumber2 = service->RegularLinkedList::getTail()->getData().getLineNumber();
		if (lineNumber1 == lineNumber2) {
			lineNumber = lineNumber1 + 1;
			pushToOtherLists(u, line, lineNumber, s);
		}
		if (lineNumber1 > lineNumber2) {
			lineNumber = lineNumber1 + 1;
			pushToOtherLists(u, line, lineNumber, s);
		}
		if (lineNumber2 > lineNumber1) {
			lineNumber = lineNumber2 - 1;
			if (lineNumber == lineNumber1)
				pushToOtherLists(u, line, lineNumber + 1, s);
			else
				pushToOtherLists(u, line, lineNumber, s);
		}
	}

	u->createUserFile();
	LinkedList::push(u, s);
}

void GoldLinkedList::pushToOtherLists(User* u, Line& line, int lineNumber, void* s) {
	int indexNumber{};
	Services* service = (Services*)s;
	size_t vecSize = service->getVector().size();
	u->setLineNumber(lineNumber);
	if (service->getQueue().size() > 0 && service->getQueue().back() == lineNumber) {
		service->getVector().at(vecSize - 1).incrementNumberOfUsers();
		service->getVector().at(vecSize - 1).setIsGoldUser();
	}
	else if (service->getVector().size() >= 3) {
		if (service->binarySearch(service->getVector(), lineNumber, indexNumber)) {
			service->getVector().at(indexNumber).incrementNumberOfUsers();
			service->getVector().at(indexNumber).setIsGoldUser();
		}
		else {
			service->getQueue().push(lineNumber + 1);
			line.setLineNumber(lineNumber);
			line.incrementNumberOfUsers();
			service->getVector().push_back(line);
		}
	}
	else
	{
		service->getQueue().push(lineNumber);
		line.setIsGoldUser();
		line.setLineNumber(lineNumber);
		line.incrementNumberOfUsers();
		service->getVector().push_back(line);
	}
}