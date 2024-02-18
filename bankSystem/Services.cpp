#include "Services.h"

Services::Services() 
	: RegularLinkedList{}, GoldLinkedList{} {
}

queue<int> &Services::getQueue() {
	return qLine;
}

vector<Line> &Services::getVector() {
	return vLine;
}

Time Services::getTime() {
	return vAverageTime.at(0);
}

Time Services::averageTime() {
	Time averageTime{};
	int hourSum{}, minSum{}, secSum{};
	if (vAverageTime.size() > 0) {
		for (size_t i{}; i < vAverageTime.size(); i++) {
			secSum += vAverageTime.at(i).sec; 
			if (secSum > 59) {
				minSum++;
				secSum -= 59;
			}
		}
		secSum /= vAverageTime.size();
		averageTime.sec = secSum;
		for (size_t i{}; i < vAverageTime.size(); i++) {
			minSum += vAverageTime.at(i).min;
			if (minSum > 59) {
				hourSum++;
				minSum -= 59;
			}
		}
		minSum /= vAverageTime.size();
		averageTime.min = minSum;
		for (size_t i{}; i < vAverageTime.size(); i++) {
			hourSum += vAverageTime.at(i).hour;
		}
		hourSum /= vAverageTime.size();
		averageTime.hour = hourSum;
	}
	return averageTime;
}

bool Services::binarySearch(const vector<Line> v, int target, int& index) {
	int low{};
	size_t high{ v.size() - 1 };
	while (low <= high) {
		int mid = low + (((int)high - low) / 2);
		Line line = v.at(mid);
		if (target == line.getLineNumber() && line.getNumberOfUsers() < 3 && line.getIsGoldUser() == false) {
			if (line.incrementNumberOfUsers()) {
				index = mid;
				return true;
			}
			else {
				return false;
			}
		}
		else if (target > line.getLineNumber())
			low = mid + 1;
		else
			high = static_cast<size_t>(mid) - 1;
	}
	return false;
}

void Services::popFromFile(string fileName) {
	ifstream oldFile;
	ofstream newFile;
	oldFile.open(fileName);
	newFile.open("temp.txt");

	int i{};
	string line;
	while (!oldFile.eof()) {
		getline(oldFile, line);
		if (i != 1) 
			newFile << line << endl;
		i++;
	}
	oldFile.close();
	newFile.close();
	remove(fileName.c_str());
	rename("temp.txt", fileName.c_str());
}

void Services::pop(void* allServices) {
	string line;
	Node* regularNode = RegularLinkedList::getHead();
	Node* goldNode = GoldLinkedList::getHead();
	if (!regularNode && !goldNode)
		return;

	if (regularNode && !goldNode) {
		vAverageTime.push_back(timeDifference(regularNode->getData().getEntranceTime()));
		line += "r_" + regularNode->getData().getUserName();
		remove(line.c_str());
		RegularLinkedList::pop(allServices);
	}
	if (!regularNode && goldNode) {
		vAverageTime.push_back(timeDifference(goldNode->getData().getEntranceTime()));
		line += "g_" + goldNode->getData().getUserName();
		remove(line.c_str());
		GoldLinkedList::pop(allServices);
	}
	if (regularNode && goldNode) {
		if (regularNode->getData().getLineNumber() >= goldNode->getData().getLineNumber()) {
			vAverageTime.push_back(timeDifference(goldNode->getData().getEntranceTime()));
			line += "g_" + goldNode->getData().getUserName();
			remove(line.c_str());
			GoldLinkedList::pop(allServices);
		}
		else {
			vAverageTime.push_back(timeDifference(regularNode->getData().getEntranceTime()));
			line += "r_" + regularNode->getData().getUserName();
			remove(line.c_str());
			RegularLinkedList::pop(allServices);
		}
	}
	vLine.at(0).decrementNumberOfUsers();
	if (vLine.at(0).getNumberOfUsers() == 0) {
		vLine.erase(vLine.begin());
		qLine.pop();
	}
}

void Services::push(User *u, void* s) {
	if (u->userPriorityCheck() == 0)
		RegularLinkedList::push(u, s);

	else if (u->userPriorityCheck() == 1)
		GoldLinkedList::push(u, s);
}

Time timeDifference(Time t1) {
	time_t lt;
	lt = time(NULL);
	tm* tm_local = localtime(&lt);

	Time t2;
	if (tm_local->tm_hour <= 12)
		t2.hour = tm_local->tm_hour;
	else 
		t2.hour = tm_local->tm_hour - 12;
	t2.min = tm_local->tm_min;
	t2.sec = tm_local->tm_sec;

	Time diff{};
	if (t2.sec < t1.sec) {
		--t2.min;
		t2.sec += 60;
	}
	diff.sec = t2.sec - t1.sec;
	if (t2.min < t1.min) {
		--t2.hour;
		t2.min += 60;
	}
	diff.min = t2.min - t1.min;
	diff.hour = t2.hour - t1.hour;
	return diff;
}