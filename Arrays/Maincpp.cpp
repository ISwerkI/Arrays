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
	//arr[2] = 1023;  //��������� � ��������.
	//cout << arr[1]<<endl;
	int max_num, min_num;
	cout << "������� ����������� ��������� �����: "; cin >> min_num;
	cout << "������� ������������ ��������� �����: "; cin >> max_num;

	//����� �������
	for (int i = 0; i < SIZE; i++)
	{
		//cout << "������� "<<i<<" ������� ������� : ";
		//cin >> arr[i];
		arr[i] = rand() % (max_num - min_num + 1) + min_num;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	//����� �������� �� ������.
#ifdef CONTRARY

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << "������� " << i << ": ";
		cout << arr[i] << "\n";
	}
	cout << "\n";
#endif



	//����� ���������
#ifdef SUM
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum<< endl;
#endif



	//������� ��������������
#ifdef ARITHMETIC_MEAN
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "������� �������������� ��������� �������: " << double sum/SIZE << endl;
#endif



	//����������� �������� � �������
#ifdef MIN_VALUE
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����� ����� ��������� �������: " << min << endl;
#endif



	//������������ �������� �������
#ifdef MAX_VALUE
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "����� ������� ��������� �������: " << max << endl;
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