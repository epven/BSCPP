#include <iostream>
/*
Выводим сначала что больше а уже потом операции сложения умножения вычетания деления
*/
int main() 
{
	std::cout << "Введите два floating-point числа\n";
	double val1 = 0;
	double val2 = 0;
	std::cin >> val1 >> val2;
	if (val1 > val2) {	
		std::cout << "Значения вал1 больше вал2: " << val1 << " > " <<val2 << "\n";
	}
	else if (val2 > val1) {
		std::cout << "Значения вал2 больше вал1: " << val2 << " > " <<val1 << "\n";
	}
	else {
		std::cout << "значения равны\n";
	}	
	std::cout << "Произведение = " << val1 * val2 << "\nЧастное = " << val1 / val2 << "\nСумма = " << val1 + val2 << "\nРазность = " << val1 - val2 << '\n';
}
