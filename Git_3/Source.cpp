#include "iostream";
#include "cmath";

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b , c;
	float s, p;
	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
	p = (a + b + c) / 3;
	s = 2 * (a + c) - 3 * b;
	cout << "Среднее арифметическое чисел равна=" << p << endl;
	cout << "Разность удвоенной суммы первого и третьего чисел и утроенного второго числа равна=" << s << endl;
	getchar();
	getchar();
	return 0;
}