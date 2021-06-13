/*
Задача №6
Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а
также разность удвоенной суммы первого и третьего чисел и утроенного второго
числа.
*/

#include "iostream";
#include "cmath";
#include "fstream";
using namespace std;
float countAvg(float a, float b, float c, float& p, float& s);
void writeFile(float& p, float& s);
int main() {
	setlocale(LC_ALL, "Russian");
	
	int a, b, c;
	float s, p;
	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
	countAvg(a, b, c, p, s);
	cout << "Среднее арифметическое чисел равна=" << p << endl;
	cout << "Разность удвоенной суммы первого и третьего чисел и утроенного второго числа равна=" << s << endl;
	writeFile(p, s);
	getchar();
	getchar();
	return 0;
}
float countAvg(float a, float b, float c,float &p,float &s) {
	p = (a + b + c) / 3;
	s = 2 * (a + c) - 3 * b;
	return 0;
}
void writeFile(float &p, float &s) {
	ofstream f("Results.txt");
	f << "Среднее арифметическое чисел равна=" << p << endl;
	f << "Разность удвоенной суммы первого и третьего чисел и утроенного второго числа равна=" << s << endl;
	f.close();
}
