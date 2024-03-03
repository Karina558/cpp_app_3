#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;

	cout << "Введіть число 1: ";
	cin >> x;

	cout << "Введіть число 2: ";
	cin >> y;

	if (x < y)
	{
		cout << "Найбільше число з " << x << " та " << y << " є:  " << y;
	}
	else if (x > y)
	{
		cout << "Найбільше число з " << x << " та " << y << " є:  " << x;
	}
	else
	{
		cout << "Дані числа є рівними!";
	}
	
	// Приклад з використанням покажчиків

	//int x = 5;
	//int *ptr_x = &x;
	//cout << x << endl<< *ptr_x << endl;

	//*ptr_x = 2;
	//cout << x << endl << *ptr_x << endl;

	//x = 8;
	//cout << x << endl << *ptr_x;



	




	return 0;
}
