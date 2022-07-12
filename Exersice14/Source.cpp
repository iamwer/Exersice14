#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");
	char string[100];
	cout << "Введите последовательность цифр: ";
	cin >> string;

	int k;
	cout << "\nВведите порядковый номер цифры: ";
	cin >> k;

	if ((k - 1) < 0 || k > strlen(string))
		cout << "\nНекорректный ввод порядкого номера" << endl << endl;
	else
		cout << "\nk-я цифра последовательности: " << string[k - 1] << endl;

	return 0;

}