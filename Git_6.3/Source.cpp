/*. ������� ���������� � �������: ��������, ���, ������������ ��������. �������
������ � ����� ��������� ������.*/
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
		cout << "������� - ";
		cin >> param.a.g;
		cout << "������ - ";
		cin >> param.a.h;
		cout << "������ - ";
		cin >> param.a.sh;
		cout << "��� - ";
		cin >> param.v;
		cout << "�������� - ";
		cin >> param.s;
		arr[i] = param;
	}


	f = arr[1].a.h * arr[1].a.sh * arr[1].a.g;
	s = arr[2].a.h * arr[2].a.sh * arr[2].a.g;
	t = arr[3].a.h * arr[3].a.sh * arr[3].a.g;

	if (f < s)
		if (f < t)
			cout << " �������� - " << arr[1].s << " ��� - " << arr[1].v << " ������ - " 
			<< arr[1].a.h << " ������ - " << arr[1].a.sh << " ������� - " << arr[1].a.g;
		else
			cout << " �������� - " << arr[3].s << " ��� - " << arr[3].v << " ������ - " 
			<< arr[3].a.h << " ������ - " << arr[3].a.sh << " ������� - " << arr[3].a.g;
	else
		if (s < t)
			cout << " �������� - " << arr[2].s << " ��� - " << arr[2].v << " ������ - " 
			<< arr[2].a.h << " ������ - " << arr[2].a.sh << " ������� - " << arr[2].a.g;
		else
			cout << " �������� - " << arr[3].s << " ��� - " << arr[3].v << " ������ - " 
			<< arr[3].a.h << " ������ - " << arr[3].a.sh << " ������� - " << arr[3].a.g;



}