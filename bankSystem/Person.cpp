#include "Person.h"

Person::Person() 
	: firstName{}, lastName{}, userName{}, password{} {
}

Person::Person(string firstName, string lastName, string userName, string passwored) 
	: firstName{ firstName }, lastName{ lastName }, userName{ userName }, password{ password } {
}

Person::~Person() {
	Clear();
}

void Person::Clear() {
	firstName.clear();
	lastName.clear();
	userName.clear();
	password.clear();
}