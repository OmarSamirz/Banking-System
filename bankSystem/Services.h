#ifndef SERVICES_H
#define SERVICES_H
#include "RegularLinkedList.h"
#include "GoldLinkedList.h"

class Services : public RegularLinkedList, public GoldLinkedList {
	friend Time timeDifference(Time t1);
	queue<int> qLine;
	vector<Line> vLine;
	vector<Time> vAverageTime;
public:
	Services();
	virtual ~Services() = default;
	queue<int> &getQueue();
	vector<Line> &getVector();
	Time getTime();
	Time averageTime();
	bool binarySearch(const vector<Line> v, int target, int& index);
	virtual void popFromFile(string fileName);
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s)  override;
};

#endif // !SERVICES_H
