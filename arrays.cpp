#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));


	//exercise 1
	const int size = 10;
	int arr[size];
	int min_value = INT_MAX, max_value = INT_MIN;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		cout << arr[i] << " ";
		if (arr[i] > max_value)
		{
			max_value = arr[i];
		}
		else if (arr[i] < min_value)
		{
			min_value = arr[i];
		}
	}
	cout << "\n\n" <<"maximum number = " << max_value<<endl;
	cout<< "minimum number = " << min_value << endl;



	//exercise 2
	cout << "\n\n\n\n";
	const int size_arr = 20;
	int arr1[size_arr];
	int upperLimit{}, lowerLimit{};
	int meaning{}, sum{};

	cout << "¬ведите нижнюю границу диапазона: ";
	cin >> lowerLimit;
	cout << "¬ведите верхнюю границу диапазона: ";
	cin >> upperLimit;
	cout << "¬ведите значение, ниже которого будет вычислена сумма: ";
	cin >> meaning;

	cout << "\n\n" << "ќдномерный массив:" << endl;
	for (int i = 0; i < size_arr; i++)
	{
		arr1[i] = lowerLimit + rand() % (upperLimit - lowerLimit + 1);
		cout << arr1[i] << " ";
	}

	for (int i = 0; i < size_arr; i++)
	{
		if (arr1[i] < meaning)
		{
			sum += arr1[i];
		}
	}
	cout << "\n\n" << "—умма элементов массива ниже " << meaning << " = " << sum << endl;



	//exercise 3
	cout << "\n\n\n\n";
	int value1, value2;
	const int size12 = 12;
	int arr2[size12];
	int max = INT_MIN, min = INT_MAX;
	int minMonth = -1, maxMonth = -1;

	for (int i = 0; i < size12; i++)
	{
		cout << "¬ведите прибыль фирмы за "<<i+1<<" мес€ц: ";
		cin >> arr2[i];
	}

	cout <<"\n\n" << "¬ведите мес€ц от которого начинать считать наибольшую и наименьшую прибыль: ";
	cin >> value1;
	cout<< "¬ведите мес€ц до которого считать наибольшую и наименьшую прибыль: ";
	cin >> value2;

	value1 -= 1;
	value2 -= 1;

	if (value1 < 0 || value2 >= size12 || value1 > value2)
	{
		cout << "Ќеверно введен диапазон" << endl;
	}

	for (int i = value1; i <= value2; i++)
	{
		if (arr2[i] > max) 
		{
			max = arr2[i];
			maxMonth = i + 1;
		}
		else if (arr2[i]< min)
		{
			min = arr2[i];
			minMonth = i + 1;
		}
	}

	cout << "\n" << "¬ " << minMonth << " мес€це была наименьша€ прибыль в введенном диапазоне = " << min << endl;
	cout << "¬ " << maxMonth << " мес€це была наибольша€ прибыль в введенном диапазоне = " << max << endl;
}