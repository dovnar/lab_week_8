#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int const size = 10;
	int arr[10]{ 5, 0, 26, 0, 12, 32, 0, 1, 14, 0};

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j - i < size; j++)
		{
			if (arr[j] == 0)
			{
				int shift = arr[j];
				arr[j] = arr[i];
				arr[i] = -1;
			}
			else if (arr[j] == -1)
			{
				int shift = arr[j];
				arr[j] = arr[i];
				arr[i] = shift;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}