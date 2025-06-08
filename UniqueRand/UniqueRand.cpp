#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int max_num = 30, min_num = 20;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (max_num - min_num + 1) + min_num;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
