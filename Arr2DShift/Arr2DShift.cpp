#include <iostream>
using namespace std;

#define delimeter "\n----------------------------------------\n"
void main()
{
    setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 10;
	int shift;
	cout << "¬ведите количество сдвигов: "; cin >> shift;
	int arr[ROWS][COLS] =
	{
		{0,1,2,3,4,5,6,7,8,9},
		{10,12,13,14,15,16,17,18,19},
		{20,21,22,23,24,25,26,27,28,29},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimeter;
#ifdef ROWS_SHIFT
	for (int b = 0; b < shift; b++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = buffer;
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
#endif
#ifdef SHIFT
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i != ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif
}
