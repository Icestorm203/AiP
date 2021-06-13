/*¬ычислить произведение отрицательных/положительных элементов массива*/
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

	int result1 = 1;
	int result2 = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			result1 *= arr[i];
			
		}
	}
	cout << "ѕроизведение отрицательных числе = " << result1 << endl;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			result2 *= arr[i];

		}
	}
	cout <<"ѕроизведение положительных числе = " << result2 << endl;


	getchar();
	getchar();
	return 0;
}
