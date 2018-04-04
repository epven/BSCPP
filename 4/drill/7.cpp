#include "../../std_lib_fac.h"
//calculator
int main()
{
	vector<string> values { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	cout << "Введите цифру для преобразование в строкое представление\n";
	int number { 0 };
	cin >> number;
	cout << number << " равно " << values[number] << '\n';
	cout << "Введи строкое представление числа для преобразование в цифру\n";
	string string_value { "" };
	cin >> string_value;
	for (int i = 0; i < values.size(); ++i)
		if (string_value == values[i])
			cout << string_value << " равно " << i << '\n';
	cout << "Введите два значения дабл а потом символ операции\n";
	double val1, val2;
	char sign;
	cin >> val1 >> val2 >> sign;
	switch(sign) {
		case '+':
			cout << "Сумма " << val1 << " и " << val2
	                     << " равна " << val1 + val2 << '\n';
			break;
		case '-':
			cout << "Разница " << val1 << " и " << val2
			     << " равна " << val1 - val2 << '\n';
			break;
		case '*':
			cout << "Произведение " << val1 << " и " << val2
		             << " равна " << val1 * val2 << '\n';
			break;
		case '/':
			cout << "Частное " << val1 << " и " << val2
			     << " равна " << val1 / val2 << '\n';
			break;
		default:
			cout << "такой операции я не знаю\n";
			break;
	}
}
