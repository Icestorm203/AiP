/*Задача №2(i)
 Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:Правильный восьмиугольник
*/


#include "iostream";
#include "cmath";
#include "fstream";
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	ofstream f("Results.txt");
	int a, p;
	float s, b;
	cout << "Введите длинну сторону правильного восьмиугольника" << endl;
	cin >> a;
	p = a * 8;
	b = sqrt(a);
	s = 2 * a * a*(1 + b);
	cout << "Периметр равен=" << p << endl;
	cout << "Площадь равна=" << s << endl;
	f <<"Периметр равен="<< p << endl;
	f <<"Площадь равна=" << s << endl;
	f.close();
	getchar();
	getchar();
	return 0;
}