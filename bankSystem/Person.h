#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

struct Time {
	int hour;
	int min;
	int sec;
};

class Person {	//Abstract class
protected:
	string firstName;
	string lastName;
	string userName;
	string password;
public:
	Person();
	Person(string, string, string, string);
	virtual ~Person();
	void Clear();
};

#endif