#ifndef DEPOSIT_H
#define DEPOSIT_H
#include "Services.h"

class Deposit : public Services {
public:
	Deposit();
	virtual ~Deposit() = default;
	virtual void popFromFile(string fileName) override;
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s)  override;
};

#endif // !DEPOSIT_H