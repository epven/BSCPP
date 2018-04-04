#include "../../std_lib_fac.h"
int main() 
{
	cout << "Введите предложение на проверку\n";
	vector<string> sentense;
	for (string temp; cin >> temp; ) {
		sentense.push_back(temp);
	}
	for (string word : sentense) {
		if (word != "broccoli" && word != "hi")
			cout << word << ' ';
		else 
			cout << "BLEEEP ";
	}
	cout << '\n';
}
