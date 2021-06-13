/*������ �1(F)
y = 2x^2 + 10, ���� x > 5
y = 0, ���� x = 0
y = 2 * |x+6| - x^2 , ���� x < 5 */

#include "iostream"
#include "cmath"
#include <fstream>

using namespace std;
void checkValue(float x, float &y);
void writeFile(float &y);

int main() {
	setlocale(LC_ALL, "Russian");

	float x, y;
	cout << "������� x" << endl;
	cin >> x;
	checkValue(x, y);
	cout << "y ����� = " << y << endl;
	writeFile(y);

	getchar();
	getchar();
	return 0;

}
void checkValue(float x, float &y) {
	if (x > 5) {
		y = 2 * (x * x) + 10;
	}
	if (x < 5) {
		y = 2 * abs(x + 6) - (x * x);
	}
	if (x == 0) {
		y = 0;
	}
}
void writeFile(float &y) {
	ofstream f("Results.txt");
	f << "y ����� = " << y << endl;
	f.close();
}