#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int const size = 5;
	int arr[size * 2];
	int arr1[size]{ -2, 0, 4, 3, -5 };
	int arr2[size]{ 5, -3, 0, -6, 0 };

	for (int i = 0; i < size * 2; i++)
	{
		if (i == size)
		{
			cout << endl;
		}
		if (i < size)
		{
			cout << arr1[i] << ' ';
		}
		else
		{
			cout << arr2[i % size] << ' ';
		}
	}
	cout << endl;

	for (int i = 0, k = 0; i <= size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr1[j] > 0 && i == 0 ||
				arr2[j] > 0 && i == 1 ||
				arr1[j] == 0 && i == 2 ||
				arr2[j] == 0 && i == 3 ||
				arr1[j] < 0 && i == 4 ||
				arr2[j] < 0 && i == 5)
			{
				if (i % 2 == 0)
				{
					arr[k] = arr1[j];
				}
				else
				{
					arr[k] = arr2[j];
				}
				k++;
			}
		}
	}
	for (int i = 0; i < size * 2; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}