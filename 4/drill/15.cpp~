#include "../../std_lib_fac.h"
 /*
 * pod efim
 * find prime numbers
 */
bool prime(int n)
{
	for (int i = 2; i < n; ++i)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	cout << "Введите число до которого следует искать простые числа\n";
	int max { 100 };
	cin >> max;
	vector<int> primes;
	for (int i = 2; i <= max; ++i)
		if (prime(i))
			primes.push_back(i);
	for (int x : primes)
		cout << x << '\n';
}
