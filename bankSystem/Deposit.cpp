#include "Deposit.h"

Deposit::Deposit() 
	: Services{} {
}

void Deposit::popFromFile(string fileName) {
	Services::popFromFile(fileName);
}

void Deposit::pop(void* allServices) {
	popFromFile("deposit_line_order");
	Services::pop(allServices);
}

void Deposit::push(User *u, void* s)  {
	Services::push(u, s);
}