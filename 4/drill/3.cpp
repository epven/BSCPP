#include "../../std_lib_fac.h"
/*
  прочитать последовательность даблов, считать что это расстояние между городами.
  Вычислить общее расстояние. Найдите наименьшее и наибольшее между двумя соседними.
  Вывести еще среднее расстояние между городами
*/
int main()
{
	cout << "Введи расстояние между городами\n";
	vector<double> distances;
	//read
	for (double distance; cin >> distance; )
		distances.push_back(distance);
	if (distances.size() > 0) {
		//summ of distances
		double sum { 0 };
		for (double x : distances)
			sum += x;
		cout << "Общее расстояние равно: " << sum << '\n';
		//min and max
		double min { distances[0] };
		double max { min };
		for (double x : distances) {
			if (x < min)
				min = x;
			if (x > max)
				max = x;
		}
		cout << "Минимальное расстояние равно: "  << min << '\n'
		     << "Максимальное расстояние равно: " << max << '\n';
		//medium distance
		double medium_distance { 0 };
		for (double x : distances)
			medium_distance += x;
		medium_distance /= distances.size();
		cout << "Среднее расстояние между городами равно: " 
		     << medium_distance << '\n';
	}
	else 
		cout << "Вы не ввели значений!\n";
	
}
