#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 4;
	const int COLS = 5;
	int max_num = 16, min = 0;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int b = 0; b < COLS; b++)
		{
			arr[i][b] = rand() % (max_num - min + 1) + min;
		}
	}
	int unic;
	int used[ROWS * COLS];
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
			for (int b = 0; b < COLS * ROWS;b++)
			{
				if (arr[i][j] == used[b])
				{
					for (int a = 0; a < min * max_num; a++)
					{
						for (int g = 0; g < COLS * ROWS; a++)
						{
							if (a == used[g])
							{
								int unic;
								break;
							}
							else
							{
								unic = a;
							}
						}
					}
					arr[i][j] = unic;
				}
				used[i+j] = arr[i][j];
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

}
