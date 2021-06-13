/*В квадратной матрице найти сумму положительных элементов, лежащих на и выше
главной диагонали и расположенных в чётных столбцах. */
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int arr[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 21 - 10;
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	
	int result = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if ((j>=i) & (i % 2 == 0) & (arr[i][j] > 0))
				result +=arr[i][j];
		}
	cout << result << endl;
	
	getchar();
	getchar();
	return 0;
}