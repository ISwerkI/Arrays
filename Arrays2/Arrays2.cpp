#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
	cout << endl;

	//Сумма элементов двумерного массива
	int answer = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			answer += arr[i][j];
		}
	}
	cout << answer<<"\t"<<endl;
	cout << (double)answer / (ROWS * COLS);
}

