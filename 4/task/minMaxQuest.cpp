//#include "../../std_lib_fac.h"
#include <iostream>
using namespace std;
int main() 
{
	constexpr double error { 1.0 / 100 };
	double val1;
	double val2;
	while (cin >> val1 >> val2) {
		double diff = val1 - val2;
		if (diff < error && diff > -error && val1 != val2) {
			cout << "Числа почти не различаются\n";
		}
		else if (val1 > val2) {
			cout << "Наименьшее значение равно " << val2 << '\n' 
			     << "Наибольшее значение равно " << val1 << '\n';
		}
		else if ( val1 == val2) {
			cout << "Числа равны\n";
		}
		else {
			cout << "Наименьшее значение равно " << val1 << '\n' 
			     << "Наибольшее значение равно " << val2 << '\n';
		}
//		cout << val1 << ' ' << val2 << '\n';
	}

}
