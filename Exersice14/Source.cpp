#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");
	char string[100];
	cout << "������� ������������������ ����: ";
	cin >> string;

	int k;
	cout << "\n������� ���������� ����� �����: ";
	cin >> k;

	if ((k - 1) < 0 || k > strlen(string))
		cout << "\n������������ ���� ��������� ������" << endl << endl;
	else
		cout << "\nk-� ����� ������������������: " << string[k - 1] << endl;

	return 0;

}