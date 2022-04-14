#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{

	setlocale(LC_ALL, "ru");
	srand(4);

	const int FOR = 10;

	int num[FOR];

	// Заполнение массива : 
	cout << "Заполнение массива : " << endl;

	for (int i = 0; i < FOR; i++)
	{
		num[i] = rand() % 10;
		cout << num[i] << " ";
	}

	cout << endl << endl;

	// Сортировка массива : 
	cout << "Сортировка массива : " << endl;

	for (int i = 0; i < FOR ; i++)
	{
		for (int i = 0; i < FOR - 1; i++)
		{
			if (num[i] > num[i + 1])
			{
				swap(num[i], num[i + 1]);
			}
		}
	}
		// Нечетное возрастание :
		for (int i = 0; i < FOR; i++)
		{
			if (num[i] % 2 != 0 || num[i]==0)
			{
			cout << num[i] << " ";
			}
		}
		// Четное возрастание :
		for (int i = 0; i <FOR; i++)
		{
			if (num[i] % 2 == 0 && num[i] > 0)
			{
				cout << num[i] << " ";
			}
		}
	

	system("pause>nul");

}