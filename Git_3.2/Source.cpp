/*Задача №1(F)
y = 2x^2 + 10, если x > 5
y = 0, если x = 0
y = 2 * |x+6| - x^2 , если x < 5 */

#include "iostream"
#include "cmath"
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	float x, y;
	cout << "Введите x" << endl;
	cin >> x;
	if (x > 5) {
		y = 2*(x*x) + 10;
	}
	if (x == 0) {
		y = 0;
	}
	if (x < 5) {
		y = 2 * abs(x + 6) - (x*x);
	}

	cout << "y равен = " << y << endl;
	f << "y равен = " << y << endl;
	f.close();
	getchar();
	getchar();
	return 0;

}