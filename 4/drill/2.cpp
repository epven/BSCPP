/* исправить программу заставив правильно выводить медиану */
#include "../../std_lib_fac.h"
int main() 
{
	cout << "Введите значения температур для поиска медианы\n";
	vector<double> temps;
	for (double temp; cin >> temp; )
		temps.push_back(temp);
	sort(temps);
	if (temps.size() == 0)
		cout << "Пустой вектор\n";
	else if (temps.size() % 2 == 0)
		cout << "Медиана равна " 
		     << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2 << '\n';
	else 
		cout << "Медиана равна " << temps[temps.size() / 2] << '\n';
}
