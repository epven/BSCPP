#include "../std_lib_fac.h"
double expression();
double term();
double primary();
class Token {
	public:
		char kind;
		double value;
};
Token get_token();
double expression() 
{
	double left = term();
	Token t = get_token();
	while (true) {
		switch(t.kind) {
			case '+':
				left += term();
				t = get_token();
				break;
			case '-':
				left -= term();
				t = get_token();
				break;
			default:
				return left;

		}
	}
}
double term() 
{
	double left = primary();
	Token t = get_token();
	while (true) {
		switch(t.kind) {
			case '*':
				left *= primary();
				t = get_token();
				break;
			case '/':
				{
					double d = primary();
					if (d == 0)
						throw runtime_error("division by 0");
					left /= d;
					t = get_token();
					break;
				}
			default:
				return left;
		}
	}
}
double primary()
{
	Token t = get_token();
	switch (t.kind) {
		case '(':
			double d = expression();
			t = get_token();
			if (t.kind != ')')
				throw runtime_error("need ')'");
			break;
		case '8':
			return t.value;
		default:
			throw runtime_error("need primary");
}
Token get_token()
{
	Token t;
	return t;
}
int main()
try 
{
	while (cin) 
		cout << expression() << '\n';
}
catch(exception& e) 
{
	cerr << e.what() << '\n';
	return 1;
}
catch(...) 
{
	cerr << "exception\n";
	return 2;
}
