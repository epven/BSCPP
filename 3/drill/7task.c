#include "../../std_lib_fac.h"
#define SIZE 3
int main() 
{
	std::cout << "Введите 3 целочисленных значения, а мы их отсортируем :)\n";
	string val[SIZE] {};
	std::cin >> val[0] >> val[1] >> val[2];
	for (int i = 0; i < SIZE; ++i) {
		string min = val[i];
		int index = i;
		for (int j = i + 1; j < SIZE; ++j) 
			if (val[j] < min) 
			{
				min = val[j];
				index = j;
			}
		val[index] = val[i];
		val[i] = min;

	}
	std::cout << val[0] << ", " << val[1] << ", " << val[2] << '\n';
}
