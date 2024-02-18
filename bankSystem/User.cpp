#include "User.h"

string Erase[7] = { "First name:", "Last name: ", "Username: ","Password: ", "Priority: ", "Balance: ", "First Card: " };

User::User()
	: Person{}, priority{}, balance{}, cardNumber{}, service{}, lineNumber{}, entranceTime{} {
}

User::User(string firstName, string lastName, string userName, string password, string priority, string balance, string cardNumber) 
	: Person{ firstName, lastName, userName, password }, priority{ priority }, balance{ balance }, cardNumber{ cardNumber }, service{}, lineNumber{}, entranceTime{} {
}

User::~User() {
	Person::Clear();
	Clear();
}

void User::setBalance(string newBalance) {
	commasInNumber(newBalance);
	balance = newBalance;
}

void User::setService(string service) {
	this->service = service;
}

void User::setLineNumber(int lineNumber) {
	this->lineNumber = lineNumber;
}

string User::getFirstName() {
	return firstName;
}

string User::getLastName() {
	return lastName;
}

string User::getUserName() {
	return userName;
}

string User::getPassword() {
	return password;
}

string User::getPriority() {
	return priority;
}

string User::getBalance() {
	return balance;
}

string User::getCardNumber() {
	return cardNumber;
}

string User::getService() {
	return service;
}

string User::calculateTime() {
	string Time;
	time_t lt;
	lt = time(NULL);
	tm* tm_local = localtime(&lt);

	if (tm_local->tm_hour <= 12) {
		Time += to_string(tm_local->tm_hour) + ":" + to_string(tm_local->tm_min) + ":" + to_string(tm_local->tm_sec);
		entranceTime.hour = tm_local->tm_hour;
	}
	else {
		Time += to_string(tm_local->tm_hour - 12) + ":" + to_string(tm_local->tm_min) + ":" + to_string(tm_local->tm_sec);
		entranceTime.hour = tm_local->tm_hour - 12;
	}
	entranceTime.min = tm_local->tm_min;
	entranceTime.sec = tm_local->tm_sec;

	return Time;
}

Time User::getEntranceTime() {
	return entranceTime;
}

int User::getLineNumber() {
	return lineNumber;
}

int User::userPriorityCheck() {
	if (priority == "Regular" || priority == "regular")
		return 0;
	if (priority == "Gold" || priority == "gold")
		return 1;
}

bool User::isUserNameSignIn(TextBox^ textBox1) {
	userName = msclr::interop::marshal_as<string>(textBox1->Text);
	ifstream userFile;
	userFile.open(userName);
	if (!userFile)
		return false;

	userFile.close();
	return true;
}

bool User::isPasswordSignIn(TextBox^ textBox1, TextBox^ textBox2) {
	userName = msclr::interop::marshal_as<string>(textBox1->Text);
	password = msclr::interop::marshal_as<string>(textBox2->Text);
	ifstream userFile;
	userFile.open(userName);
	if (!userFile)
		return false;
	string line;
	int i{};
	while (i < 4) {
		getline(userFile, line);
		i++;
	}
	line.erase(0, Erase[i].length());
	if (line != password)
		return false;

	userFile.close();
	return true;
}

void User::signIn(TextBox^ textBox1) {
	userName = msclr::interop::marshal_as<string>(textBox1->Text);
	ifstream userFile;
	userFile.open(userName);
	string line;
	if (!userFile)
		return;

	for (int i{}; i < 7; i++) {
		getline(userFile, line);
		line = line.erase(0, Erase[i].length());
		if (i == 0) 
			firstName = line;
		if (i == 1) 
			lastName = line;
		if (i == 2) 
			userName = line;
		if (i == 3) 
			password = line;
		if (i == 4) 
			priority = line;
		if (i == 5) 
			balance = line;
		if (i == 6) 
			cardNumber = line;
	}
	userFile.close();
}

bool User::userNameCompare(TextBox^ textBox1) {
	string userNameToCompare = msclr::interop::marshal_as<string>(textBox1->Text);
	ifstream userFile;
	userFile.open(userNameToCompare);

	if (!userFile)
		return false;

	int i{};
	string line;
	while (i < 3) {
		getline(userFile, line);
		i++;
	}
	line = line.erase(0, Erase[i].length());
	
	return (line == userNameToCompare)? true : false;
}

bool User::passwordSignIn(TextBox^ textBox1, TextBox^ textBox2) {
	userName = msclr::interop::marshal_as<string>(textBox1->Text);
	password = msclr::interop::marshal_as<string>(textBox2->Text);
	ifstream userFile;
	userFile.open(userName);

	string line;
	for (int i{}; i < 4; i++) 
		getline(userFile, line);

	line.erase(0, Erase[3].length());
	if (line != password)
		return false;

	userFile.close();
	return true;
}

void User::createAccount(TextBox^ textBox1, TextBox^ textBox2, TextBox^ textBox3, TextBox^ textBox4, TextBox^ textBox5, TextBox^ textBox6) {
	firstName = msclr::interop::marshal_as<string>(textBox1->Text); 
	lastName = msclr::interop::marshal_as<string>(textBox2->Text);
	priority = msclr::interop::marshal_as<string>(textBox3->Text);
	balance = msclr::interop::marshal_as<string>(textBox4->Text);
	userName = msclr::interop::marshal_as<string>(textBox5->Text);
	password = msclr::interop::marshal_as<string>(textBox6->Text);
	balance = commasInNumber(balance);  

	ofstream userFile; 
	userFile.open(userName);
	userFile << "First name: " << firstName << endl;
	userFile << "Last name: " << lastName << endl;
	userFile << "Username: " << userName << endl;
	userFile << "Password: " << password << endl;
	userFile << "Priority: " << priority << endl;
	userFile << "Balance: " << balance << endl;
	srand(time_t(NULL));
	for (int i{}; i < 16; i++) {               
		int num = rand() % 10;
		cardNumber += to_string(num);
	}
	userFile << "First Card: " << cardNumber << endl;
	userFile.close();
}

void User::createUserFile() {
	string pri;
	if (getPriority() == "Regular" || getPriority() == "regular")
		pri = "r_";
	if (getPriority() == "Gold" || getPriority() == "gold")
		pri = "g_";
	if (getPriority() == "Platinum" || getPriority() == "platinum")
		pri = "p_";
	ofstream userFile;
	userFile.open(pri + userName);
	userFile << "Time: " << calculateTime() << endl;
	userFile << "Service: " << getService() << endl;
	userFile << "First name: " << getFirstName() << endl;
	userFile << "Last Name: " << getLastName() << endl;
	userFile << "Username: " << getUserName() << endl;
	userFile << "Priority: " << getPriority() << endl;

	userFile.close();	
}

void User::Clear() {
	priority.clear();
	balance.clear();
	cardNumber.clear();
	service.clear();
	lineNumber = 0;
}

string commasInNumber(string num) {
	int x = stoi(num); 

	int n = num.length() - 3;
	int end = (x >= 0) ? 0 : 1; 
	while (n > end) { 
		num.insert(n, ",");
		n -= 3;
	}
	return num; 
}