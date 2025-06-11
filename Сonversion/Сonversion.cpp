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
	int decimal = 200;
	const int MAX_HEX_CAPACITY = 8; 
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0; 
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16 < 10 ? decimal % 16 + 48 : decimal % 16 +55;
		//hex[i] = decimal % 16; 
		// //hex[i++] += hex[i] < 10 ? 48 : 55; 
	}
		for (--i; i >= 0; i--)
			cout << hex[i];
		//for (--i; i >= 0; i--)cout << char(hex[i] < 10 ? hex[i] + 48 
		cout << endl;

}