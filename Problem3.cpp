#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double hours, ot = 0, total;
	while (true) {
		cout << "Enter number of hours worked: ";
		cin >> hours;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Please enter a number.\n";
		}
		else if (hours < 0) {
			cout << "You can't work negative hours.\n";
		}
		else if (hours > 168) {
			cout << "There aren't even that many hours in the week???\n";
		}
		else {
			if (hours > 40) {
				ot = hours - 40;
				hours = 40;
			}
			cout << "This employee received $" << setprecision(2) << fixed << (hours * 16) << " of pay for the week.\n";
			total = hours * 16;
			if (ot != 0) {
				cout << "They also received $" << setprecision(2) << fixed << (ot * 16 * 1.5) << " of overtime for the week.\n";
				total = (hours * 16) + (ot * 16 * 1.5);
			}
			cout << "They received $" << setprecision(2) << fixed << total << " of gross pay for the week.\n";
			cout << "Witholdings\n---------------\n";
			cout << "Social Security: $" << setprecision(2) << fixed << total * .06 << endl;
			cout << "Federal Income Tax: $" << setprecision(2) << fixed << total * .14 << endl;
			cout << "State Income Tax: $" << setprecision(2) << fixed << total * .05 << endl;
			cout << "Medical Insurance: $10.00" << endl;
			total = total - (total*.06) - (total*.14) - (total*.05) - 10;
			cout << "Net pay: $" << setprecision(2) << fixed << total << endl;
			break;
		}
	}
	system("pause");
	return 0;
}