#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee : public Person {
	string offeredService;
	Time workTime;
public:
	Employee();
	Employee(string, string, string, string);
	string timeCalculate();
};

#endif // !EMPLOYEE_H