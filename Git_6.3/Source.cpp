/*. Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом маленьком роботе.*/
#include <iostream>

using namespace std;

struct robot {
	float v, s;
	struct gabar {
		int h, sh, g;
	};
	gabar a;
};



int main()
{
	float f, s, t;
	setlocale(LC_ALL, "Russian");

	robot param;

	robot arr[3];

	for (int i = 0; i < 3; i++) {
		cout << "глубина - ";
		cin >> param.a.g;
		cout << "высота - ";
		cin >> param.a.h;
		cout << "ширина - ";
		cin >> param.a.sh;
		cout << "вес - ";
		cin >> param.v;
		cout << "скорость - ";
		cin >> param.s;
		arr[i] = param;
	}


	f = arr[1].a.h * arr[1].a.sh * arr[1].a.g;
	s = arr[2].a.h * arr[2].a.sh * arr[2].a.g;
	t = arr[3].a.h * arr[3].a.sh * arr[3].a.g;

	if (f < s)
		if (f < t)
			cout << " скорость - " << arr[1].s << " вес - " << arr[1].v << " высота - " 
			<< arr[1].a.h << " ширина - " << arr[1].a.sh << " глубина - " << arr[1].a.g;
		else
			cout << " скорость - " << arr[3].s << " вес - " << arr[3].v << " высота - " 
			<< arr[3].a.h << " ширина - " << arr[3].a.sh << " глубина - " << arr[3].a.g;
	else
		if (s < t)
			cout << " скорость - " << arr[2].s << " вес - " << arr[2].v << " высота - " 
			<< arr[2].a.h << " ширина - " << arr[2].a.sh << " глубина - " << arr[2].a.g;
		else
			cout << " скорость - " << arr[3].s << " вес - " << arr[3].v << " высота - " 
			<< arr[3].a.h << " ширина - " << arr[3].a.sh << " глубина - " << arr[3].a.g;



}