#ifndef USER_H
#define USER_H
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
#include "Person.h"

using namespace std;
using namespace System::Windows::Forms;



class User : public Person {	//Concrete class
	friend string commasInNumber(string num);
	string priority;
	string balance;
	string cardNumber;
	string service;
	int lineNumber;
	Time entranceTime;
public: 
	User();
	User(string, string, string, string, string, string, string);
	~User();
	void setBalance(string newBalance);
	void setService(string service);
	void setLineNumber(int lineNumber);
	string getFirstName();
	string getLastName();
	string getUserName();
	string getPassword();
	string getPriority();
	string getBalance();
	string getCardNumber();
	string getService();
	string calculateTime();
	Time getEntranceTime();
	int getLineNumber();
	int userPriorityCheck();
	bool isUserNameSignIn(TextBox^ textBox1);
	bool isPasswordSignIn(TextBox^ textBox1, TextBox^ textBox2);
	bool userNameCompare(TextBox^ textBox1);
	bool passwordSignIn(TextBox^ textBox1, TextBox^ textBox2);
	void signIn(TextBox^ textBox1);
	void createAccount(TextBox^ textBox1, TextBox^ textBox2, TextBox^ textBox3, TextBox^ textBox4, TextBox^ textBox5, TextBox^ textBox6);
	void createUserFile();
	void Clear();
};

#endif

