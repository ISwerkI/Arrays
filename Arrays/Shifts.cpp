#include <iostream>
using namespace std;

//#define SHIFT_RIGHT
//#define SHIFT_LEFT

void main()
{
	setlocale(LC_ALL, "");
#ifdef SHIFT_LEFT
	const int SIZE = 10;
	int shift;
	int record;
	cout << "¬ведите количество сдвигов: "; cin >> shift;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < shift; i++)
	{
		record = arr[0];
		for (int a = 0; a < 9; a++)
		{
				arr[a] = arr[a + 1];
		}
		arr[9] = record;
	}
	for (int b = 0; b < SIZE; b++)
	{
		cout << arr[b] << " ";
	}
#endif
#ifdef SHIFT_RIGHT
	const int SIZE = 10;
	int shift;
	int record;
	cout << "¬ведите количество сдвигов: "; cin >> shift;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < shift; i++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (arr[b] == 0)
			{
				arr[b] = 10;
			}
			arr[b] = arr[b]-1;
		}
	}
	for (int b = 0; b < SIZE; b++)
	{
		cout << arr[b] << " ";
	}
#endif


}