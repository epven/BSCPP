#include <iostream>
/*проверчка на четность*/
int main()
{
	std::cout << "Введите целочисленное число, чтобы проверить его на четность\n";
	int number = -1;
	while (std::cin >> number) {
		if (number % 2 == 0)
			std::cout << "Число " << number << " четное\n";
		else
			std::cout << "Число " << number << " не четное\n";
	}
}
