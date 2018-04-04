#include "../../std_lib_fac.h"
int quess_number(int left, int right)
{
	if (left == right)
		return left;
	int medium { (left + right) / 2 };
	cout << "Число больше чем: " << medium << " y/n?\n";
	char answer { ' ' };
	cin >> answer;
	if (answer == 'y')
		return quess_number(medium + 1, right);
	else
		return quess_number(left, medium);
}
int main()
{
	cout << "Ваши число: " << quess_number(1, 100) << '\n';
}
