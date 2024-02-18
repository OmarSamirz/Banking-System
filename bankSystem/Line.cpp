#include "Line.h"

Line::Line() 
	: lineNumber{}, numberOfUsers{}, isGoldUser{ false } {
}

int Line::getLineNumber() {
	return lineNumber;
}

int Line::getNumberOfUsers() {
	return numberOfUsers;
}

bool Line::getIsGoldUser() {
	return isGoldUser;
}

bool Line::incrementNumberOfUsers() {
	if (numberOfUsers < 2) {
		numberOfUsers++;
		return true;
	}
	return false;
}

bool Line::decrementNumberOfUsers() {
	if (numberOfUsers > 0) {
		numberOfUsers--;
		return true;
	}
	return false;
}

void Line::setLineNumber(int l) {
	lineNumber = l;
}

void Line::setIsGoldUser() {
	isGoldUser = true;
}