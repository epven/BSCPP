#include "../../std_lib_fac.h"
int main()
try {
	int x1 { 1 };
	int x2 { 1 };
	while (x1 > 0 && x2 > 0) {
		x1 += x2;
		if (x1 < 0)
			cout << x2 << '\n';
		x2 += x1;
		if (x2 < 0)
			cout << x1 << '\n';
	}
}
catch(runtime_error& s) {
	cerr << "Runtime error: " << s.what() << '\n';
	return 1;
}
catch(...) {
	cerr << "unhandled error\n";
	return 2;
}
