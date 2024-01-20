//(вариант 6) Дана последовательность целых чисел {Aj}. Найти сумму отрицательных чисел, кратных 7, наибольшее из таких чисел и номер этого числа в последовательности.

#include <iostream>

int main()
{
	const int max_size = 10;
	int mas[max_size];
	int n; //кол-во элементов в массиве
	int sum = 0;

	int max = INT_MIN;
	int max_index = -1; // -1 поскальку число ещё не найдено

	std::cout << "kol-vo chisel v mas < 11: "; std::cin >> n;

	std::cout << "chisla v mas: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> mas[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i]; // записываем новое наибольшее число, если найдено большее
			max_index = i+1;//получается на 1 меньше
		}
			if (mas[i] < 0 && mas[i] % 7 == 0)
			{
				sum += mas[i];
			}
	}
	std::cout << "sum chisel kratnyh 7: " << sum << std::endl;
	std::cout << "max: " << max << std::endl;
	std::cout << "max's index: " << max_index << std::endl;
}
