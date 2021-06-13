/*Робот-самолёт описывается как структура с полями: скорость вращения винта,
радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги,
создаваемую винтом (произведение всех характеристик).*/
#include <iostream>

using namespace std;

struct samolet {
	float s, r, k;
};

int findTraction(struct samolet param);

int main()
{
	setlocale(LC_ALL, "Russian");

	samolet param;

	cin >> param.k
		>> param.r
		>> param.s;

	int result = findTraction(param);

	cout << result;
}
int findTraction(struct samolet param) {
	int result = param.k * param.r * param.s;
	return (result);
}