#include "../../std_lib_fac.h"
int main()
{
	cout << "Введите выражение вида: оператор операнд1 операнд2\n";
	string operation = "?";
	double operator1;
	double operator2;
	cin >> operation >> operator1 >> operator2;
	if (operation == "+" || operation == "plus")
		cout << operator1 + operator2 << "\n";
	else if (operation == "-" || operation == "minus")
		cout << operator1 - operator2 << "\n";
	else if (operation == "*" || operation == "mul")
		cout << operator1 * operator2 << "\n";
	else if (operation == "/" || operation == "div")
		cout << operator1 / operator2 << "\n";
	else
		cout << "Я вас не понял :(, извините\n";

}
