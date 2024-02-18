#include "AllServices.h"
#include "Services.h"

AllServices::AllServices() 
	: head{ nullptr }, tail{ nullptr } {
}

Node* AllServices::getHead() {
	return head;
}

int AllServices::priorityCheck(User* u) {
	if (u->getPriority() == "Regular" || u->getPriority() == "regular")
		return 0;
	if (u->getPriority() == "Gold" || u->getPriority() == "gold")
		return 1;
	return -1;
}

void AllServices::pop(User* u) {
	if (!head)
		return;

	Services deleteFromFile{};
	Node* curr = head;
	User currUser{};
	User nextUser{};
	while (curr) {
		currUser = curr->getData();
		if (head == curr && currUser.getLineNumber() == u->getLineNumber() && currUser.getUserName() == u->getUserName() && currUser.getService() == u->getService()) {
			head = head->getNext();
			if (head == nullptr)
				tail = head;
			delete curr;
			break;
		}
		if (curr->getNext() != nullptr) {
			nextUser = curr->getNext()->getData();
			if (nextUser.getLineNumber() == u->getLineNumber() && nextUser.getUserName() == u->getUserName() && nextUser.getService() == u->getService()) {
				curr->setNext(curr->getNext()->getNext());
				delete curr->getNext();
				break;
			}
		}
		else {
			if (currUser.getLineNumber() == u->getLineNumber() && currUser.getUserName() == u->getUserName() && currUser.getService() == u->getService()) {
				curr->setNext(curr->getNext());
				delete curr;
				break;
			}
		}
		curr = curr->getNext();
	}
	deleteFromFile.popFromFile("all_services_line_order");
}

void AllServices::pop(Services* arr[]) {
	if (!head)
		return;

	Services deleteFromFile{};
	Node* curr = head;
	User currUser = curr->getData();
	if (currUser.getService() == "Deposit")
		arr[0]->pop(nullptr);
	if (currUser.getService() == "Withdrawal")
		arr[1]->pop(nullptr);
	if (currUser.getService() == "Customer Service")
		arr[2]->pop(nullptr);
	if (currUser.getService() == "Front Desk")
		arr[3]->pop(nullptr);

	head = head->getNext();
	if (head == nullptr)
		tail = head;
	delete curr;
	deleteFromFile.popFromFile("all_services_line_order");
}

void AllServices::push(User* u) {
	Node* newNode = new Node{ *u };
	if (!head) {
		head = tail = newNode;
		return;
	}
	Node* curr = head;
	while (curr) {
		User currUser = curr->getData();
		if (head == curr && (priorityCheck(u) > priorityCheck(&currUser))) {
			newNode->setNext(curr);
			head = newNode;
			break;
		}
		else if (head == curr && (priorityCheck(u) < priorityCheck(&currUser)) && !curr->getNext()) {
			head->setNext(newNode);
			tail = newNode;
			break;
		}
		else if ((priorityCheck(u) == priorityCheck(&currUser)) && (currUser.getLineNumber() == u->getLineNumber())) {
			if (currUser.getLineNumber() == u->getLineNumber()) {
				if (currUser.getEntranceTime().hour < u->getEntranceTime().hour) {
					if (curr->getNext()) {
						if (curr->getNext()->getData().getEntranceTime().min < u->getEntranceTime().min && curr->getNext()->getData().getLineNumber() == u->getLineNumber()) {
							curr = curr->getNext();
							continue;
						}
						newNode->setNext(curr->getNext());
						curr->setNext(newNode);
					}
					else {
						curr->setNext(newNode);
						tail = newNode;
					}
				}
				if (currUser.getEntranceTime().min < u->getEntranceTime().min && currUser.getEntranceTime().hour == u->getEntranceTime().hour) {
					if (curr->getNext()) {
						if (curr->getNext()->getData().getEntranceTime().min < u->getEntranceTime().min && curr->getNext()->getData().getLineNumber() == u->getLineNumber() && priorityCheck(&curr->getNext()->getData()) == priorityCheck(u)) {
							curr = curr->getNext();
							continue;
						}
						newNode->setNext(curr->getNext());
						curr->setNext(newNode);
						break;
					}
					else {
						curr->setNext(newNode);
						tail = newNode;
						break;
					}
				}
				if (currUser.getEntranceTime().sec < u->getEntranceTime().sec && currUser.getEntranceTime().min == u->getEntranceTime().min) {
					if (curr->getNext()) {
						if (curr->getNext()->getData().getEntranceTime().sec < u->getEntranceTime().sec && curr->getNext()->getData().getLineNumber() == u->getLineNumber() && priorityCheck(&curr->getNext()->getData()) == priorityCheck(u)) {
							curr = curr->getNext();
							continue;
						}
						newNode->setNext(curr->getNext());
						curr->setNext(newNode);
						break;
					}
					else {
						curr->setNext(newNode);
						tail = newNode;
						break;
					}
				}
			}
		}
		else if (curr == tail) {
			tail->setNext(newNode);
			tail = newNode;
			break;
		}
		else if (curr->getNext()->getData().getLineNumber() > u->getLineNumber()) {
			newNode->setNext(curr->getNext());
			curr->setNext(newNode);
			break;
		}
		if (curr->getNext())
			curr = curr->getNext();
	}
}