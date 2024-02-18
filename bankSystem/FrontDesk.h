#ifndef FRONTDESK_H
#define FRONTDESK_H
#include "Services.h"

class FrontDesk : public Services {
public:
	FrontDesk();
	virtual ~FrontDesk() = default;
	virtual void popFromFile(string fileName) override;
	virtual void pop(void* allServices) override;
	virtual void push(User *u, void* s)  override;
};

#endif // !FRONTDESK_H
