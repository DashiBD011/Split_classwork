#include<iostream>
#include<ctime>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	cout << "Введите размер массива: "; cin >> n;
	cout << "\n";
	int* arr = new int[n];

	cout << "Исходный массив:" << endl;
	FillRand(arr, n);
	Print(arr, n);
	
	int even_count = 0; 
	int odd_count = 0;  

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_count++;
		else odd_count++;
	}
	
	int* even_values = new int[even_count] {};
	int* odd_values = new int[odd_count] {};

	for (int i = 0, i_even = 0, i_odd = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_values[i_even++] = arr[i];
		else odd_values[i_odd++] = arr[i];
	}

	cout << "Массив с четными значениями:" << endl;
	Print(even_values, even_count);

	cout<<"Массив с нечетными значениями:"<<endl;
	Print(odd_values, odd_count);

	delete[]even_values;
	delete[]odd_values;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	arr[i] = rand() % 10;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	cout << arr[i] << "\t";
	cout <<"\n"<< endl;
}

// Предмет: Основы программирования на языке С++
// Преподаватель: Ковтун Олег
// Выполнил: Батодалаев Даши