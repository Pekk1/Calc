#include <iostream>
#include "calc.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int choice = 0;
	double a, b;

	cout << "Выберите операцию:" << endl;
	cout << "1 - сложение" << endl;
	cout << "2 - вычитание" << endl;
	cout << "3 - умножение" << endl;
	cout << "4 - деление" << endl;
	cin >> choice;
	cout << endl;

	cout << "Введите числа a b:" << endl;
	cin >> a >> b;
	cout << endl;

	switch (choice) {
	default:
		cout << "ERROR" << endl;
		break;

	case 1:
		cout << "a + b = " << summation(a, b) << endl;
		break;

	case 2:
		cout << "a - b = " << subtraction(a, b) << endl;
		break;

	case 3:
		multiplication(a, b);
		break;

	case 4:
		division(a, b);
		break;

	}
	
	system("pause");
	return 0;
}