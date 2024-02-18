#ifndef LINE_H
#define LINE_H

class Line {
	int lineNumber;
	int numberOfUsers;
	bool isGoldUser;
public:
	Line();
	int getLineNumber();
	int getNumberOfUsers();
	bool getIsGoldUser();
	bool incrementNumberOfUsers();
	bool decrementNumberOfUsers();
	void setLineNumber(int l);
	void setIsGoldUser();
};

#endif // !LINE_H
