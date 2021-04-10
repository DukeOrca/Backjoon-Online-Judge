#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string S, T;

	cin >> S;
	cin >> T;

	int length(T.length());

	for (int i(length - 1); i >= 0; --i) {
		if (S.length() == T.length()) {
			if (S == T) {
				cout << 1 << endl;

				return 0;
			}

			continue;
		}
			
		char t(T.back());
		
		T.pop_back();

		if (t == 'B')
			reverse(T.begin(), T.end());
	}

	cout << 0 << endl;

	return 0;
}
