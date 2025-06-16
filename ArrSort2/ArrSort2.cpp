#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 20;
	const int COLS = 20;
	int max_num = 100, min = 0;
	int arr[ROWS][COLS];
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
	int min_num;
	int record_ROWS;
	int record_COLS;
	int counter_ROWS = 0;
	int counter_COLS = 0;
	int p;
	for (int i = 0; i < ROWS; i++)
	{
		for (int b = 0; b < COLS; b++)
		{
			min_num = arr[i][b];
			for (int j = counter_ROWS; j < ROWS; j++)
			{
				if (j > counter_ROWS)
				{
					p = 0;
				}
				else 
				{
					p = counter_COLS; 
				}
				for (p; p < COLS; p++)
				{
					if (min_num >= arr[j][p])
					{
						min_num = arr[j][p];
						record_ROWS = j;
						record_COLS = p;
					}
				}
			}
			arr[record_ROWS][record_COLS] = arr[i][b];
			arr[i][b] = min_num;
			counter_COLS++;
			if (counter_COLS == COLS)
			{
				counter_ROWS++;
				counter_COLS = 0;
			}
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
}