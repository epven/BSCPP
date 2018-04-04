#include "../../std_lib_fac.h"
int main()
{
	cout << "Введите до какого числа искать простые числа\n";
	int max { 100 };
	cin >> max;
	vector<char> numbers(max + 1, true);
	numbers[0] = false;
	numbers[1] = false;
	for (int i = 2; i < numbers.size(); ++i)
		if (numbers[i])
			for (int j = 2; j * i < numbers.size(); j++)
				numbers[j * i] = false;
	for (int i = 0; i < numbers.size(); ++i)
		if (numbers[i])
			cout << i << '\n';

}
