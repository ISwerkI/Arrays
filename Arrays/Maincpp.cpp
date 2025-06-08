#include <iostream>
using namespace std;

//#define SUM
//#define ARITHMETIC_MEAN
//#define MIN_VALUE
//#define MAX_VALUE
//#define CONTRARY
//#define GROWTH

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//arr[2] = 1023;  //Обращение к элементу.
	//cout << arr[1]<<endl;
	int max_num, min_num;
	cout << "Введите минимальное случайное число: "; cin >> min_num;
	cout << "Введите максимальное случайное число: "; cin >> max_num;

	//Вывод массива
	for (int i = 0; i < SIZE; i++)
	{
		//cout << "Введите "<<i<<" элемент массива : ";
		//cin >> arr[i];
		arr[i] = rand() % (max_num - min_num + 1) + min_num;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	//Вывод массивов на оборот.
#ifdef CONTRARY

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << "Элемент " << i << ": ";
		cout << arr[i] << "\n";
	}
	cout << "\n";
#endif



	//Сумма элементов
#ifdef SUM
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum<< endl;
#endif



	//Среднее арифметическое
#ifdef ARITHMETIC_MEAN
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Среднее арифметическое элементов массива: " << double sum/SIZE << endl;
#endif



	//Минимальное значение в массиве
#ifdef MIN_VALUE
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Самый малый элементов массива: " << min << endl;
#endif



	//Максимальное значение массива
#ifdef MAX_VALUE
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Самый большой элементов массива: " << max << endl;
#endif
#ifdef GROWTH
	int min;
	int record_num;
	for (int i = 0; i < SIZE; i++)
	{
		min=arr[i];
		for (int b = i; b < SIZE; b++)
		{
			if (min > arr[b])
			{
				min = arr[b];
				record_num = b;
			}

		}
		if (min == arr[i])
		{
			continue;
		}
		arr[record_num] = arr[i];
		arr[i] = min;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif


}