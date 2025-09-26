#include <iostream>
using namespace std;

int main()
{
	cout << "Years is -  ";
	int year;
	cin >> year;
	if (year % 10 != 0 && year % 4 == 0 || year % 400 == 0) {
		cout << "Is leap year - 366 days";
	}
	else cout << "Is not leap year - 365 days";
}

