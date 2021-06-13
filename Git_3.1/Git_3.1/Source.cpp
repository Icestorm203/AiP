/*Задача №1(I)
y = 2x^2 - 3, если x > 7
y = 0, если x = 7
y = 2 * |x| + 3, если x < 7*/


#include "iostream"
#include "cmath"
#include <fstream>

using namespace std;
void checkValue(float x, float &y);
void writeFile(int y);
int main() {
	setlocale(LC_ALL, "Russian");
	
	float x, y;
	cout << "Введите x" << endl;
	cin >> x;
	checkValue(x, y);
	cout << "y равен = " << y << endl;
	writeFile(y);

	getchar();
	getchar();
	return 0;
	
}
void checkValue(float x, float &y) {
	if (x > 7) {
		y = 2 * (x * x) - 3;
	}
	if (x == 7) {
		y = 0;
	}
	if (x < 7) {
		y = 2 * abs(x) + 3;
	}
}
void writeFile(int y) {
	ofstream f("Results.txt");
	f << "y равен = " << y << endl;
	f.close();
}