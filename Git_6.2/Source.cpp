/*Задача 2
 Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
атрибута: вещественную часть и мнимую. Объявите два числа и получите их
значения от пользователя.
a. Напишите функцию, которая будет считать модуль комплексного числа.
 */
#include <iostream>
#include <cmath>

using namespace std;

struct complex
{
	float p, q;
};

float findModule(complex a);

int main() {
	setlocale(LC_ALL, "Russian");

	complex a;
	cout << "Введите p и q" << endl;
	cin >> a.p;
	cin >> a.q;

	float b = findModule(a);

	cout << b;

	getchar();
	getchar();
	return 0;
}

float findModule(complex a) {
	float z;
	z = sqrt(a.p * a.p + a.q * a.q);
	return(z);
}

