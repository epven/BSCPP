#include <iostream>
int main() 
{
	constexpr double rubles_in_dollar {60.0};
	constexpr double griven_in_dollar {30.0};
	constexpr double juans_in_dollar {6.32};
	constexpr char juan = 'j';
	constexpr char rubl = 'r';
	constexpr char griv = 'g';
	double count = 0;
	char currency = ' ';
	std::cout << "Введите кол-во и валюту\n";
	std::cin >> count >> currency;
	switch (currency) {
		case juan:
			std::cout << count / juans_in_dollar 
				  << " Долларов это " << count << " юань\n";
			break;
		case griv:
			std::cout << count / griven_in_dollar 
				  << " Долларов это " << count << " гривень\n";
			break;
		case rubl:
			std::cout << count / rubles_in_dollar 
				  << " Долларов это " << count << " рублей\n";
			break;
	}

}
