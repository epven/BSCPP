#include "../../std_lib_fac.h"
int square(int x) 
{
	int square_value { 0 };
	for (int i = 0; i < x; ++i)
		square_value += x;
	return square_value;
}
int main() 
{
	cout << "Введи число для вычесление его квадрата\n";
	int i { 0 };
	cin >> i;
	cout << square(i) << '\n';
}
