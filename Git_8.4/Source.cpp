/*��������, ����������� ���������� ������� � ���������� ��� �� ����� � �������
�� ����� �������, ����������� ��������� ��������. ���������� ���� �������
a. ��������� �����������. ����������� ������� �� ��������. ������ �������
��������������� �������� �������� �������: �������, �����, ������. */
#include <iostream>

using namespace std;

struct Pic {
	float r, g, b;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Pic picture[2][2];

	Pic pix;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++) {
			cout << "�������� ������� " << i + 1 << "." << j + 1 << endl;
			cout << "red = ";
			cin >> pix.r;
			cout << "green = ";
			cin >> pix.g;
			cout << "blue = ";
			cin >> pix.b;
			picture[i][j] = pix;
		}
	cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cout << "r - " << picture[i][j].r << '\t';
		cout << endl;
		for (int j = 0; j < 2; j++)
			cout << "g - " << picture[i][j].g << '\t';
		cout << endl;
		for (int j = 0; j < 2; j++)
			cout << "b - " << picture[i][j].b << '\t';
		cout << endl;
		cout << endl;
	}
}
