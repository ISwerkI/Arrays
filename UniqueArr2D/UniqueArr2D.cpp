#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 4;
	int max_num = 10, min = 0;
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
	

}
