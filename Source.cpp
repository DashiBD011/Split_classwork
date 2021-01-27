#include<iostream>
#include<ctime>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{

	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	srand(time(NULL));
	FillRand(arr, n);
	Print(arr, n);

	//Посчитаем кол-во четных и нечетных значений в исходном массиве
	int even_count = 0; // кол-во четных
	int odd_count = 0;  // кол-во нечетных


	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_count++;
		else odd_count++;
	}
	// Выделяем память для массивов:
	int* even_values = new int[even_count] {};
	int* odd_values = new int[odd_count] {};

	//Копируем значения в соответ массивы
	for (int i = 0, i_even = 0, i_odd = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_values[i_even++] = arr[i];
		else odd_values[i_odd++] = arr[i];
	}

	//Выводим массивы на экран
	Print(even_values, even_count);
	Print(odd_values, odd_count);


	delete[]even_values;
	delete[]odd_values;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}