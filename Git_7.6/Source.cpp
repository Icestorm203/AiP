/*Создать новый массив из двух других массивов путём операций над элементами
массивов:
c. сложения*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int arr1[15], arr2[15], arr3[15];

	for (int i = 0; i < 15; i++) {
		arr1[i] = rand() % 10 + 1;
		cout << arr1[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 15; i++) {
		arr2[i] = rand() % 10 + 1;
		cout << arr2[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 15; i++) {
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << " ";
	}


}