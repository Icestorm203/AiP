/*Реализовать сложение, вычитание, умножение, транспонирование матриц
(разрешается фиксированный размер матриц).*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int a[5][5], b[5][5], c[5][5], s;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			a[i][j] = rand() % 10 + 1;
			b[i][j] = rand() % 10 + 1;
		}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			c[i][j] = a[i][j] + b[i][j];

	cout << "сложение " << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}

	cout << endl;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			c[i][j] = a[i][j] - b[i][j];

	cout << "вычитание " << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			c[i][j] = a[i][j] * b[i][j];

	cout << "умножение " << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}

	cout << endl;

	cout << "транспонирование " << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << a[j][i] << " ";
		cout << endl;
	}

	getchar();
	getchar();
	return 0;
}