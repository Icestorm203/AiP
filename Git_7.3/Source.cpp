/*����� ����������/���������� ������� ������� � ��� ����� �� �������*/
#include "iostream"
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int const n = 10;
	int arr[n];

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << " ";
	}

	cout << endl;

	int max = arr[0];
	int min = arr[0];
	int q1 = 0;
	int q2 = 0;
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			q1 = i;
		}
	}
	cout << "�������� - " <<  max << endl << "����� - " <<  q1 << endl;

	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
			q2 = i;
		}
	}
	cout << "������� - " << min << endl << "����� - " << q2 << endl;
	

	getchar();
	getchar();
	return 0;
}
