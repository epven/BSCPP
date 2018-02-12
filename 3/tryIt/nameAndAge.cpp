#include <iostream>
#include "../std_lib_fac.h"
int main() {
	std::cout << "Введите имя и возраст\n";
	string firstName = "???";
	double age = -1;
	std::cin >> firstName >> age;
	std::cout << "Hello " << firstName << " твой возраст в месяцах " << age * 12 << '\n';
	return 0;
}
