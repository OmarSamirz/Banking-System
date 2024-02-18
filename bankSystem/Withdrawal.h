#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H
#include "Services.h"

class Withdrawal : public Services {
public:
	Withdrawal();
	virtual ~Withdrawal() = default;
	virtual void popFromFile(string fileName) override;
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s)  override;
};

#endif // !WITHDRAWAL_H
