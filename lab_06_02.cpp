//(вариант 6) Дано натуральное число N (N<10^9). Найти произведение цифр числа N.

#include <iostream>

int main()
{
	int number;
	int value;
	int mult = 1;

	std::cout << "chislo: "; std::cin >> number;

	while (number > 0)
	{
		value = number % 10;
		mult *= value;
		number /= 10;
	}

	if (mult == 0)
	{
		std::cout << "chislo soderzhit 0";
	}
	else
	{
		std::cout << "proizvedenie: " << mult;
	}
}
