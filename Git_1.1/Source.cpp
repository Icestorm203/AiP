/*������ �1
 ������� �� ����� ������ ����� ����� �� �������� "*" (���������)
 (�������(�))*/

#include "iostream";
#include "fstream";

using namespace std;
void drawLetter();
void writeFile();
int main() {
	drawLetter();
	
	writeFile();
	
	getchar();
	getchar();
	return 0;
}

void drawLetter() {
	cout<< "**        **" << endl
		<< "* *      * *" << endl
		<< "*  *    *  *" << endl
		<< "*   *  *   *" << endl
		<< "*    *     *" << endl
		<< "*          *" << endl
		<< "*          *" << endl
		<< "*          *" << endl;
}
void writeFile() {
	ofstream f("Results.txt");
	f	<< "**        **" << endl
		<< "* *      * *" << endl
		<< "*  *    *  *" << endl
		<< "*   *  *   *" << endl
		<< "*    *     *" << endl
		<< "*          *" << endl
		<< "*          *" << endl
		<< "*          *" << endl;
	f.close();
}