/*Задача №2(D)
y = (-3+x)^2 + 2x+5
Протабулировать функцию (шаг и диапазон задаёт пользователь):*/


#include "iostream"
#include <fstream>
#include <cmath>
#include <iomanip> 
using namespace std;
void tabFunc(float dx, float xf, float x, float& y);
void writeFile(float dx, float xf, float x, float& y);
int main() {
	setlocale(LC_ALL, "Russian");
	ofstream f("Results.txt");
	float dx, xf, x;
	float y;
	cout << "Введите dx: ";
	cin >> dx;
	cout << "Введите x0: ";
	cin >> x;
	cout << "Введите xf: ";
	cin >> xf;
	cout << "\tx\t\ty" << std::endl;
	cout.precision(5);
	f << "\tx\t\ty" << std::endl;

	tabFunc(dx, xf, x, y);
	writeFile(dx, xf, x, y);
	
	getchar();
	getchar();
	return 0;
}
void tabFunc(float dx, float xf, float x, float& y) {

	while (x < xf) {
		y = y = ((-3 + x) * (-3 + x)) + 2 * x + 5;
		cout << "\t" << x << "\t\t" << y << endl;
		x += dx;
	}
}
void writeFile(float dx, float xf, float x, float& y) {
	ofstream f("Results.txt");
	while (x < xf) {
		y = y = ((-3 + x) * (-3 + x)) + 2 * x + 5;
		f << "\t" << x << "\t\t" << y << endl;
		x += dx;
	}
	f.close();
}