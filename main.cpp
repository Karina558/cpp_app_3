#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;

	cout << "������ ����� 1: ";
	cin >> x;

	cout << "������ ����� 2: ";
	cin >> y;

	if (x < y)
	{
		cout << "�������� ����� � " << x << " �� " << y << " �:  " << y;
	}
	else if (x > y)
	{
		cout << "�������� ����� � " << x << " �� " << y << " �:  " << x;
	}
	else
	{
		cout << "��� ����� � ������!";
	}
	
	// ������� � ������������� ���������

	//int x = 5;
	//int *ptr_x = &x;
	//cout << x << endl<< *ptr_x << endl;

	//*ptr_x = 2;
	//cout << x << endl << *ptr_x << endl;

	//x = 8;
	//cout << x << endl << *ptr_x;



	




	return 0;
}
