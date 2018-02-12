/*
Пользователь вводит цифру в виде слова на выходе получаем это число

*
*/
#include "../../std_lib_fac.h"
int main() 
{
	cout << "Введите число словами\n";
	string text_number = "???";
	cin >> text_number;
	if (text_number == "один") 
		cout << 1 << '\n';
	else if (text_number == "два")
		cout << 2 << '\n';
	else if (text_number == "три")
		cout << 3 << '\n';
	else if (text_number == "четыре")
		cout << 4 << '\n';
	else
		cout << "Я не знаю такого числа!\n";
}
