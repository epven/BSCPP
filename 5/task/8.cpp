#include "../../std_lib_fac.h"
/*
 * Напишите программу, считывающую и сохраняющую ряд целочисленных значений,
 * а затем вычислающую сумм первых N чисел. Запросите значение N, считайте значения в vector и вычислите сумму первых N значений. Обрабатывать любые входные данные. Например, если
 * пользователь требует суммировать чисел больше, чем сохранено в векторе, выводите соответствующие сообщение.
 */
void series_summ() 
//
{
	//in
	cout << "Введите количество суммируемых значений:\n";
	int count { -1 };
	cin >> count;
	if (count < 1)
		throw runtime_error("count should be a positive number");
	cout << "Введите несколько целых чисел (не число для окончания ввода):\n";

	vector<int> number_series;
	for (int temp; cin >> temp; )
		number_series.push_back(temp);

	//evaluation
	if (count > number_series.size()) 
		throw runtime_error("vector size is smaller than asked number " + count);
	int summ { 0 };
	for (int i = 0; i < count; ++i) {
		if (summ > 0 && number_series[i] > 0 && summ + number_series[i] < 0)
			throw runtime_error("int overflow");
		summ += number_series[i];
	}
	cout << "Полученная сумма равна: " << summ << '\n';
}
int main() 
try {
	series_summ();
}
catch(runtime_error& s) {
	cerr << "runtime error: " << s.what() << '\n';
	return 1;
}
catch(...) {
	cerr << "unhandled exception\n";
	return 2;
}
