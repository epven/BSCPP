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
	cout << "Введите число сколько простых чисел нужно вывести\n";
	int n { 10 };
	cin >> n;
	vector<int> primes;
	for (int i = 2; n > 0; ++i)
		if (prime(i)) {
			primes.push_back(i);
			--n;
		}
	for (int x : primes)
		cout << x << '\n';
}
