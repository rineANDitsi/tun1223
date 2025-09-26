#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1
	/*
	cout << "Years is -  ";
	int year;
	cin >> year;
	if (year % 10 != 0 && year % 4 == 0 || year % 400 == 0) {
		cout << "Is leap year - 366 days";
	}
	else cout << "Is not leap year - 365 days";
	*/
	//2
	/*string arr[]{ "\033[31m", "\033[32m", "\03333m", "\033[41m", "\033[42m", "\033[43m" };
	int colorOfText, colorBack;
	while (true) {
		system("cls");
		cout << "\n1. Red\n2. Green\n3. White\nText color is - ";
		cin >> colorOfText;
		if (colorOfText > 0 && colorOfText < 4) {
			cout << "colorOfText: " << colorOfText;
			while (true) {
				system("cls");
				cout << "\n1. Red\n2. Green\n3. Yellow\nBackground color is - ";
				cin >> colorBack;
				if (colorBack > 0 && colorBack < 4) {
					colorBack += 3;
					break;
				}
			}
			break;
		}
	}
	cout << arr[colorOfText-1] << arr[colorBack-1] << "\nText lalalal\033[0m";
	*/
	//3
	int col, row;
	while (true) {
		system("cls");
		cout << "col - ";
		cin >> col;
		if (col > 0) {
			while (true) {
				system("cls");
				cout << "row - ";
				cin >> row;
				if (row > 0) break;
			}
			break;
		}
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}


