#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 4;
	const int COLS = 5;
	int max_num = 15, min = 0;
	int arr[ROWS][COLS];
	int used[ROWS * COLS];
	int counter;
	bool check = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int b = 0; b < COLS; b++)
		{
			arr[i][b] = rand() % (max_num - min + 1) + min;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			counter = 1;
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = ; b < COLS; b++)
				{
					if (arr[i][j] == arr[a][b])counter++;
				}
			}
			for (int b = 0; b < ROWS * COLS; b++)
			{
				if (arr[i][j] == used[b])
				{
					check = 1;
					break;
				}
			}
			if (counter > 1 and check == 0)
			{
				used[i + j] = arr[i][j];
				cout << arr[i][j] << " в массиве повторяется " << counter << " раз" << endl;
			}
		}
	}
}
