/*Увеличить все нечётные элементы массива на 3, а чётные в 2 раза*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int const n = 10;
	int arr[n];

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
		if (arr[i] % 2 == 1) {
			arr[i] += 3;
			cout << arr[i] << " ";
		}
		else {
			arr[i] *= 2;
			cout << arr[i] << " ";
		}

}