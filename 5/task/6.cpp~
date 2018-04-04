#include "../../std_lib_fac.h"
double convert(double temperature, char unit)
//converts celsius to fahrenheit and vice versa
//Precondition temperature should be more >0k
//Postcondition return
{
	switch(unit) {
		case 'f':
			if (temperature < -459.67)
				throw runtime_error("imposible temperature");
			else
				return (temperature - 32) * (5.0 / 9);
			break;
		case 'c':
			if (temperature < -273.15)
				throw runtime_error("imposible temperature");
			else
				return 9.0 / 5 * temperature + 32;
			break;
		default:
			throw runtime_error("unknown unit");
			break;
	}
}
int main()
try {
	cout << "Введите температуру и единицу измерения\n";
	double temperature { 0 };
	cin >> temperature;
	char unit { '?' };	
	cin >> unit;
	double result = convert(temperature, unit);
	cout << result << '\n';
}
catch(runtime_error& s) {
	cerr << "runtime error: " << s.what() << '\n';
	return 1;
}
