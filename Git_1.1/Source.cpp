/*Задача №1
 Вывести на экран Первую букву имени из символов "*" (звездочка)
 (Мустафа(М))*/

#include "iostream";
#include "fstream";

using namespace std;

int main() {
	ofstream f("Results.txt");
		cout << "**        **" << endl
		<< "* *      * *" << endl
		<< "*  *    *  *" << endl
		<< "*   *  *   *" << endl
		<< "*    *     *" << endl
		<< "*          *" << endl
		<< "*          *" << endl
		<< "*          *" << endl;


	f <<"**        **" << endl
		<< "* *      * *" << endl
		<< "*  *    *  *" << endl
		<< "*   *  *   *" << endl
		<< "*    *     *" << endl
		<< "*          *" << endl
		<< "*          *" << endl
		<< "*          *" << endl;
	f.close();
	getchar();
	getchar();
	return 0;
}