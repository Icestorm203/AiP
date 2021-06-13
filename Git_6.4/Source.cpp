/*Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о датчике с наибольшим
диапазоном значений.*/
#include <iostream>

using namespace std;

struct chip {
	float p, s;
	struct diap {
		int min, max;
	};
	diap a;
};

void qwe();

int main()
{
	qwe();
}

void qwe() {
	int f, s, t, r;
	setlocale(LC_ALL, "Russian");

	chip param;

	chip arr[3];

	for (int i = 0; i < 3; i++) {
		cout << "мин - ";
		cin >> param.a.min;
		cout << "макс - ";
		cin >> param.a.max;
		cout << "погрешность - ";
		cin >> param.p;
		cout << "скорость - ";
		cin >> param.s;
		arr[i] = param;
	}


	f = arr[1].a.max - arr[1].a.min;
	s = arr[2].a.max - arr[2].a.min;
	t = arr[3].a.max - arr[3].a.min;

	if (f > s)
		if (f > t)
			cout << " скорость - " << arr[1].s << " погрешность - " << arr[1].p 
			<< " мин - " << arr[1].a.min << " макс - " << arr[1].a.max;
		else
			cout << " скорость - " << arr[3].s << " погрешность - " << arr[3].p 
			<< " мин - " << arr[3].a.min << " макс - " << arr[3].a.max;
	else
		if (s > t)
			cout << " скорость - " << arr[2].s << " погрешность - " << arr[2].p 
			<< " мин - " << arr[2].a.min << " макс - " << arr[2].a.max;
		else
			cout << " скорость - " << arr[3].s << " погрешность - " << arr[3].p 
			<< " мин - " << arr[3].a.min << " макс - " << arr[3].a.max;



}
