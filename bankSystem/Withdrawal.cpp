#include "Withdrawal.h"

Withdrawal::Withdrawal() 
	: Services{} {
}

void Withdrawal::popFromFile(string fileName) {
	Services::popFromFile(fileName);
}

void Withdrawal::pop(void* allServices) {
	popFromFile("withdrawal_line_order");
	Services::pop(allServices);
}

void Withdrawal::push(User *u, void* s)  {
	Services::push(u, s);
}