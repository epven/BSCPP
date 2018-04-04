#include <iostream>
int main() 
{
	constexpr double rubles_in_dollar {60.0};
	constexpr double griven_in_dollar {30.0};
	constexpr double juans_in_dollar {6.32};
	double count = 0;
	char currency = ' ';
	std::cout << "Введите кол-во и валюту\n";
	std::cin >> count >> currency;
	if (currency == 'r') 
		std::cout << count << " rubles is " << count / rubles_in_dollar << '\n';
	else if (currency == 'g')
		std::cout << count << " griven is " << count / griven_in_dollar << '\n';
	else if (currency == 'j')
		std::cout << count << " juans is " << count / juans_in_dollar << '\n';
	else
		std::cout << "Я не знаю такой валюты\n";
}
