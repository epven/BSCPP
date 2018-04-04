#include <cmath>
#include <iostream>
int calc(int a) 
{
	a *= 10;
	return a;
}
int main()
{
	int(*r) (int) = &calc;
	std::cout << r(21);
	int a {1};
	float b {1};
	int diff {0};
	for (unsigned int i = 0; i < pow(2, 31); ++i) {
		if (++a != ++b) 
			++diff;
	}
	std::cout << diff << ' '  << '\n';
}

