/*Реализовать вычисление матричных норм (можно для квадратных
матриц).
Дана матрица. Составить массив, каждый элемент которого равен максимальному
элементу соответствующей строки матрица.*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	int arr[5][5], max;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			arr[i][j] = rand() % 10 + 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
		for (int k = 0; k < 2; k++)
			for (int j = 0; j < 5; j++) {
				if (k == 0 & j == 0)
					max = arr[i][j];

				if (k > 0)
					if (arr[i][j] < max)
						arr[i][j] = max;

				if (arr[i][j] > max)
					max = arr[i][j];

			}

	cout << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	max = 0;
	for (int i = 0; i < 5; i++)
		max = max + abs(arr[0][i]);

	for (int i = 0; i < 5; i++) {
		int s = 0;
		for (int j = 0; j < 5; j++) {
			s = s + abs(arr[i][j]);
			if (max < s)
				max = s;
		}
	}

	cout << endl << "норма " << max;
}