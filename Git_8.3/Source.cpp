/*���� �������. �������� ������ ������ � ���������� ������� � ���������������
����, ������ ������ � ���� ����� � ���� ����. �����, ��� �� � ��� ��� ������?
(������ � ����� ����� ������� ����� ��� � ����� ��������� ����).*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr[2][5];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 10 + 1;
		}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	cout << endl;
	int max = arr[0][0];
	for (int i = 0; i < 5; i++)
		if (max < arr[0][i])
			max = arr[0][i];

	int max2 = arr[1][0];
	for (int i = 0; i < 5; i++)
		if (max2 < arr[1][i])
			max2 = arr[1][i];

	for (int i = 0; i < 5; i++)
		if (max == arr[0][i] and arr[1][i] == max2)
			cout << "������ � " << i + 1 << " ���� " << endl;

	getchar();
	getchar();
	return 0;

}