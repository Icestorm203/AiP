/*������� ���������� �� ������ ��������� � ��������� ����� � ������ N �������. ��
������� �� ��������� ������� ��������� ��������: �������, ������ ��
����������, ������ �� ����������� � ������ �� ������. 
a. ������ ���������� �� ��������� � ���������� ���������� � �������
����������.
b. ������ ���������� �� ��������� � ���������� ���������� � �������
���������, ������� ���� �� ���� ������.
c. ������ ���������� �� ��������� ��������� � ���������� ������� ���� ��
������ ����������.*/
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct st {
	string surname;
	int mark_m, mark_i, mark_f;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(0));

	st arr[3];
	float fi = 0, in = 0, ma = 0;

	for (int i = 0; i < 3; i++) {
		cout << "������� ��������: ";
		cin >> arr[i].surname;
		cout << "   ������ �� ������: ";
		cin >> arr[i].mark_f;
		cout << "   ������ �� �����������: ";
		cin >> arr[i].mark_i;
		cout << "   ������ �� ����������: ";
		cin >> arr[i].mark_m;
	}

	cout << "��������:      ������:   �����������:   ����������:";

	for (int i = 0; i < 3; i++) {
		cout << endl << "               " << arr[i].mark_f << "         " << arr[i].mark_i << "              " << arr[i].mark_m << endl;
		fi += arr[i].mark_f;
		in += arr[i].mark_i;
		ma += arr[i].mark_m;
	}
	fi /= 3;
	in /= 3;
	ma /= 3;

	cout << "������� ����:  " << fi << "\t " << in << "\t" << ma << endl;

	cout << "���������:" << endl;

	for (int i = 0; i < 3; i++) {
		if (arr[i].mark_f == 5 & arr[i].mark_i == 5 & arr[i].mark_m == 5)
			cout << arr[i].surname << endl;

	}

	cout << "���������:" << endl;

	for (int i = 0; i < 3; i++) {
		if (arr[i].mark_f == 2 || arr[i].mark_i == 2 || arr[i].mark_m == 2)
			cout << arr[i].surname << endl;

	}

	getchar();
	getchar();
	return 0;

}