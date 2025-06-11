#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 20;
	int arr[SIZE];
	int record[SIZE];
	int max_num = 0, min_num = 10;
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
	int counter;
	for (int i = 0; i < SIZE; i++)
	{
		counter = 1;
		for (int b = i+1; b < SIZE; b++)
		{
			if (arr[i] == arr[b])
			{
				counter++;
			}
		}
		for (int a = 0; a < SIZE; a++)
		{
			if (arr[i] == record[a])
			{
				counter = 0;
			}
		}
		if (counter > 1)
		{
			cout <<"Число "<< arr[i] << " повторяется " << counter << " раза." << endl;
			record[i] = arr[i];
		}
	}
}
