#ifndef CUSTOMERSERVICE_H
#define CUSTOMERSERVICE_H
#include "Services.h"

class CustomerService : public Services {
	vector<int> vAverageTime;
public:
	CustomerService();
	virtual ~CustomerService() = default;
	virtual void popFromFile(string fileName) override;
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s) override;
};

#endif // !CUSTOMERSERVICE_H
