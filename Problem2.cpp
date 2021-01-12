#include <iostream>
using namespace std;

int main()
{
	int cap, guests;
	
	while (true) {
		cout << "Enter the rooms capacity: ";
		cin >> cap;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer.\n";
		}
		else if (cap <= 0) {
			cout << "Please enter a number greater than 0.\n";
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Enter how many guests are attending: ";
		cin >> guests;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer.\n";
		}
		else if (guests < 0) {
			cout << "There can't be negative guests.\n";
		}
		else {
			break;
		}
	}
	if (guests <= cap) {
		cout << "It is legal to use the room! ";
		if ((cap - guests) == 1) {
			cout << "You can still invite 1 person!\n";
		}
		else if ((cap - guests == 0)) {
			cout << "You can not invite anybody else. You are at compacity.\n";
		}
		else if ((cap - guests) > 1) {
			cout << "You can still invite " << cap - guests << " people.\n";
		}
	}
	else {
		cout << "You are over compacity and the event cannot be held due to fire regulations.";
		if ((guests - cap) == 1) {
			cout << "You need to uninvite one person.\n";
		}
		else if ((guests - cap) > 1) {
			cout << "You need to uninvite " << guests - cap << " people.\n";
		}
	}
	system("pause");
	return 0;
}