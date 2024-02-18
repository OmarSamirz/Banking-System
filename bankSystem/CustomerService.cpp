#include "CustomerService.h"

CustomerService::CustomerService() 
	: Services{} {
}

void CustomerService::popFromFile(string fileName) {
	Services::popFromFile(fileName);
}

void CustomerService::pop(void* allServices) {
	popFromFile("customer_service_line_order");
	Services::pop(allServices);
}

void CustomerService::push(User *u, void* s)  {
	Services::push(u, s);
}