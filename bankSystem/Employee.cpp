#include "Employee.h"

Employee::Employee() 
	: Person{}, offeredService{}, workTime{ 8,0,0 } {
}

Employee::Employee(string firstName, string lastName, string userName, string offeredService) 
	: Person{ firstName, lastName, userName, "" }, offeredService{ offeredService }, workTime{ 8,0,0 } {
}
