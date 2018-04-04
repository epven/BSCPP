#include "../../std_lib_fac.h"
//calculator
int main()
{
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
