#include "../../std_lib_fac.h"
int main() 
{
	for (int i = 0; i < 256; ++i) {
		if ((i >= 48 && i <= 57) || (i >= 65 && i <= 90)) 
		cout << char { i } << ' ' << int { char{ i } } << '\n';
	}
}
