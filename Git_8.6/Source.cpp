/*–еализовать вычисление матричных норм из списка выше (можно дл€ квадратных
матриц).
ѕреобразовать матрицу: элементы строки, в которой находитс€ минимальный
элемент матрицы, заменить нул€ми.*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int arr[5][5], s = 0, max = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 10 - 5;
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	int min = arr[1][1];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (min > arr[i][j])
				min = arr[i][j];
		}
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (min == arr[i][j]) {
				for (int k = 0; k < 5; k++)
					arr[i][k] = 0;
				break;
			}
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
		max = max + abs(arr[0][i]);

	for (int i = 0; i < 5; i++) {
		s = 0;
		for (int j = 0; j < 5; j++) {
			s = s + abs(arr[i][j]);
			if (max < s)
				max = s;
		}
	}
	cout << "norma " << max;

	getchar();
	getchar();
	return 0;
}