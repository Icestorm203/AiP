/*Задача №2(c)
Вычислить сумму элементов массива:
меньших 5, больших 6, меньших 4, */

#include <iostream>
using namespace std;
void randNum(float arr[], int n);
float sumMore(float arr[], int n, int b, float sum);
float sumLess(float arr[], int n, int b, float sum);
int main() {
	setlocale(LC_ALL, "Russian");
	srand(2);
	const int n = 10;
	float arr[n];
	randNum(arr,10);
	cout << endl;
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;
	sumLess(arr, 10, 5, sum1);
	sumMore(arr, 10, 6, sum2);
	sumLess(arr, 10, 4, sum3);
	
}


void randNum(float arr[], int n) {
	for (int i = 0; i < 10; i++) {
		arr[i] = float(rand() % 99) / 10 ;
		cout << arr[i] << endl;
	}
}


float sumMore(float arr[], int n, int b, float sum) {
	for (int i = 0; i < n; i++) {
		if (arr[i] > b)
			sum += arr[i];
	}
	cout << sum << endl;
	return sum;
	
}
float sumLess(float arr[], int n, int b, float sum) {
	for (int i = 0; i < n; i++) {
		if (arr[i] < b)
			sum += arr[i];
	}
	cout << sum << endl;
	return sum;
	
}

