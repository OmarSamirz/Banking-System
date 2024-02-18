#ifndef ALLSERVICES_H
#define ALLSERVICES_H
#include "Services.h"

class AllServices {
	Node* head, * tail;
public:
	AllServices();
	Node* getHead();
	int priorityCheck(User* u);
	void pop(User* u);
	void pop(Services* arr[]);
	void push(User* u);
};

#endif // !ALLSERVICES_H
