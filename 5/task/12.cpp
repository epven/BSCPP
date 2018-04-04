#include "../../std_lib_fac.h"
//
int main()
try {
	vector<int> key { 1, 8, 2, 4 };
	vector<int> guess(4);
	int temp { 0 };
	int cows { 0 };
	int bull { 0 };
	while (bull < 4) {
		cout << "Insert 4 numbers to guess\n";
		bull = 0;
		cows = 0;
		for (int i = 0; i < guess.size(); ++i) {
			cin >> temp;
			guess[i] = temp;
		}
		//bull count
		for (int i = 0; i < guess.size(); ++i) {
			if (key[i] == guess[i])
				++bull;
		}
		//cow count
		for (int i = 0; i < guess.size(); ++i) {
			for (int j = 0; j < guess.size(); ++j) {
				if (i == j && guess[i] == key[i])
					continue;
				if (guess[i] == key[j])
					++cows;
			}
		}
		cout << "Bull: " << bull << '\n'
		     << "Cows: " << cows << '\n';
	}
}
catch(...) {

}
