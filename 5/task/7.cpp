#include "../../std_lib_fac.h"

void quadratic_equation(double a, double b, double c)
//solve quadratic equation
//Precondition: (b * b - 4 * a * c) >= 0
//Postcondition: cout roots x1, x2
{
	if (a==0) {
		if (b==0)
			cout << "no roots\n";
		else
			cout << "x is " << -c/b << '\n';
	}
	else if (b==0) {
		if (-c/a >= 0)
			cout << "x1 is " << sqrt(-c/a) << '\n'
			     << "x2 is " << -sqrt(-c/a) << '\n';
		else
			cout << "no real roots\n";
	}
	else {
		double discriminant { b * b - 4 * a * c };
		if (discriminant < 0)
			throw runtime_error("negative discriminant");
		cout << "x1: " << (-b + sqrt(discriminant)) / (2 * a) << '\n'
	     	     << "x2: " << (-b - sqrt(discriminant)) / (2 * a) << '\n';	
	}
}

int main()
try {
	cout << "Введите коэффициенты квадратного уравнения a, b, c\n";
	double a;
	cin >> a;
	double b;
	cin >> b;
	double c;
	cin >> c;
	quadratic_equation(a, b, c);
	
}
catch(runtime_error& s) {
	cerr << "Runtime error: " << s.what() << '\n';
	return 1;
}
