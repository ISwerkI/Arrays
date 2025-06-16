#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int min, max;
	int min_num, max_num;
	min_num = 0; max_num = 100;
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int b = 0; b < COLS; b++)
		{
			arr[i][b] = rand() % (max_num - min_num + 1) + min_num;
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
	min = max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int b = 0; b < COLS; b++)
		{
			if (arr[i][b] < min) { min = arr[i][b]; }
			if (arr[i][b] > max) { max = arr[i][b]; }
		}
	}
	cout << min << endl << max;
}