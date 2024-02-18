#include "FrontDesk.h"

FrontDesk::FrontDesk() 
	: Services{} {
}

void FrontDesk::popFromFile(string fileName) {
	Services::popFromFile(fileName);
}

void FrontDesk::pop(void* allServices) {
	popFromFile("front_desk_line_order");
	Services::pop(allServices);
}

void FrontDesk::push(User *u, void* s)  {
	Services::push(u, s);
}