#include <iostream>
using namespace std;

//#define BINARY
//#define HEXADECIMAL

void main()
{
	setlocale(LC_ALL, "");
#ifdef BINARY
	int user_num;
	int remain;
	const int SIZE = 999;
	int arr[SIZE];
	cout << "Введите число, которое хотите перевести: "; cin >> user_num;
	int i;
	for (i = 0 ;user_num != 0 ;i++)
	{
		remain = user_num % 2;
		user_num = (user_num - remain) / 2;
		arr[i] = remain;
	}
	i--;
	for (i; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
#endif
#ifdef HEXADECIMAL
	int user_num;
	int remain;
	const int SIZE = 999;
	int arr[SIZE];
	cout << "Введите число, которое хотите перевести: "; cin >> user_num;
	int i;
	for (i = 0; user_num != 0; i++)
	{
		remain = user_num % 16;
		user_num = (user_num - remain) / 16;
		arr[i] = remain;
	}
	i--;
	for (i; i >= 0; i--)
	{
		if (arr[i] == 10)
		{
			cout << "A" << " ";
		}
		else if (arr[i] == 11)
		{
			cout << "B" << " ";
		}
		else if (arr[i] == 12)
		{
			cout << "C" << " ";
		}
		else if (arr[i] == 13)
		{
			cout << "D" << " ";
		}
		else if (arr[i] == 14)
		{
			cout << "E" << " ";
		}
		else if (arr[i] == 15)
		{
			cout << "F" << " ";
		}
		else
		{
			cout << arr[i] << " ";
		}
	}
#endif

}