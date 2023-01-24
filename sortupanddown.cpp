#include <iostream>
using namespace std;

template <class T>
void CreateMassive(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 30 + 1;
}

template <class T>
void PrintMassive(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
}

void SortUpAndDown(int arr[], int size, bool choose = false)
{
	int index{};
	int value{};
	if (choose == false)
	{
		cout << "Сортировка по убыванию" << endl;
		for (int i = 0; i < size; i++)
		{
			value = arr[i];
			index = i;
			for (int j = i + 1; j < size; j++)
			{
				if (value < arr[j])
				{
					value = arr[j];
					index = j;
				}
			}
			if (index == i)
				continue;

			arr[index] = arr[i];
			arr[i] = value;
		}
	}
	else
	{
		cout << "Сортировка по возрастанию" << endl;
		for (int i = 0; i < size; i++)
		{
			value = arr[i];
			index = i;
			for (int j = i + 1; j < size; j++)
			{
				if (value > arr[j])
				{
					value = arr[j];
					index = j;
				}
			}
			if (index == i)
				continue;

			arr[index] = arr[i];
			arr[i] = value;
		}
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	int const size = 10;
	int arr[size]{};
	int choose = rand() % 2 + 0;

	CreateMassive(arr, size);
	PrintMassive(arr, size);
	cout << endl;

	SortUpAndDown(arr, size, choose);
	PrintMassive(arr, size);
	cout << endl;

	return 0;
}