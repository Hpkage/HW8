// Source.cpp Hiromi Kageyama Dec. 4, 2020
// Improve a previously written homework program

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::sqrt;

int main() {
	double a, b, c;

	while (true) {
		cout << "Enter the coefficient of a: ";
		cin >> a;
		cout << "Enter the coefficient of b: ";
		cin >> b;
		cout << "Enter the coefficient of c: ";
		cin >> c;
		cout << endl;
		if (a == 0) {
			cout << "UNDEFINED." << endl;
			return 1;
		}

		double x1, x2;
		x1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

		cout << "X = " << x1 << " and or X = " << x2 << endl << endl;
	}
	return 0;
}