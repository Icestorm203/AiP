/*������� ���������� � ��������: �������� ���������� �������� (min, max),
�����������, ������������ ��������. ������� ������ � ������� � ����������
���������� ��������.*/
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
		cout << "��� - ";
		cin >> param.a.min;
		cout << "���� - ";
		cin >> param.a.max;
		cout << "����������� - ";
		cin >> param.p;
		cout << "�������� - ";
		cin >> param.s;
		arr[i] = param;
	}


	f = arr[1].a.max - arr[1].a.min;
	s = arr[2].a.max - arr[2].a.min;
	t = arr[3].a.max - arr[3].a.min;

	if (f > s)
		if (f > t)
			cout << " �������� - " << arr[1].s << " ����������� - " << arr[1].p 
			<< " ��� - " << arr[1].a.min << " ���� - " << arr[1].a.max;
		else
			cout << " �������� - " << arr[3].s << " ����������� - " << arr[3].p 
			<< " ��� - " << arr[3].a.min << " ���� - " << arr[3].a.max;
	else
		if (s > t)
			cout << " �������� - " << arr[2].s << " ����������� - " << arr[2].p 
			<< " ��� - " << arr[2].a.min << " ���� - " << arr[2].a.max;
		else
			cout << " �������� - " << arr[3].s << " ����������� - " << arr[3].p 
			<< " ��� - " << arr[3].a.min << " ���� - " << arr[3].a.max;



}
