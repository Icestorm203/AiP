/*Имеется информация по итогам экзаменов в институте всего в списке N человек. По
каждому из студентов имеются следующие сведения: фамилия, оценка по
математике, оценка по информатике и оценка по физике. 
a. Ввести информацию об экзаменах и напечатать количество и фамилии
отличников.
b. Ввести информацию об экзаменах и напечатать количество и фамилии
студентов, имеющих хотя бы одну двойку.
c. Ввести информацию об экзаменах вычислить и напечатать средний балл по
каждой дисциплине.*/
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct st {
	string surname;
	int mark_m, mark_i, mark_f;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(0));

	st arr[3];
	float fi = 0, in = 0, ma = 0;

	for (int i = 0; i < 3; i++) {
		cout << "Фамилия студента: ";
		cin >> arr[i].surname;
		cout << "   Оценка по физике: ";
		cin >> arr[i].mark_f;
		cout << "   Оценка по информатике: ";
		cin >> arr[i].mark_i;
		cout << "   Оценка по математике: ";
		cin >> arr[i].mark_m;
	}

	cout << "Предметы:      Физика:   Информатика:   Математика:";

	for (int i = 0; i < 3; i++) {
		cout << endl << "               " << arr[i].mark_f << "         " << arr[i].mark_i << "              " << arr[i].mark_m << endl;
		fi += arr[i].mark_f;
		in += arr[i].mark_i;
		ma += arr[i].mark_m;
	}
	fi /= 3;
	in /= 3;
	ma /= 3;

	cout << "Средний балл:  " << fi << "\t " << in << "\t" << ma << endl;

	cout << "Отличники:" << endl;

	for (int i = 0; i < 3; i++) {
		if (arr[i].mark_f == 5 & arr[i].mark_i == 5 & arr[i].mark_m == 5)
			cout << arr[i].surname << endl;

	}

	cout << "Двоечники:" << endl;

	for (int i = 0; i < 3; i++) {
		if (arr[i].mark_f == 2 || arr[i].mark_i == 2 || arr[i].mark_m == 2)
			cout << arr[i].surname << endl;

	}

	getchar();
	getchar();
	return 0;

}