#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double oz;
	while (true) {
		cout << "Enter how many ounces of cereal are in a box: ";
		cin >> oz;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Please enter a number or decimal number\n";
		}
		else if (oz <= 0) {
			cout << "Please enter a number greater than 0.\n";
		}
		else {
			cout << "One box is " << oz / 35273.92 << " metric tons.\n";
			cout << "You would need " << ceil(35273.92 / oz) << " boxes to make one metric ton of cereal\n";
			break;
		}
	}
	system("pause");
	return 0;
}