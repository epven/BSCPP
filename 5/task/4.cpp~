#include "../../std_lib_fac.h"

double ctok(double c)
//calculate temperature in kelvin
//Precondition c >= 273.15
//Postcondition returns value >= 0
{
	double k = c + 273.15;
	return k;
}

int main()
try {
	double c { 0 };
	cin >> c;
	if (c < -273.15)
		throw runtime_error("bad temperature");
	double k = ctok(c);
	cout << k << '\n';
}
catch(runtime_error& s) {
	cerr << "runtime error: " << s.what() << '\n';
	return 1;
}
