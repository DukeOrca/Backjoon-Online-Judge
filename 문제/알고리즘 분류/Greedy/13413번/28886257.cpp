#include <iostream>
#include <string>

using namespace std;

inline void flip(char &c) {
	c = c == 'W' ? 'B' : 'W';
}

inline void swap(char& l, char& r) {
	char c(l);
	l = r;
	r = c;
}

int simulate(int N, string &s, string &t) {
	int k(0);

	for (int i(0); i < N; ++i) {
		if (s[i] != t[i]) {
			bool b(true);

			for (int j(i + 1); j < N; ++j) {
				if (s[i] == s[j])
					continue;

				if (s[j] != t[j]) {
					swap(s[i], s[j]);
					b = false;
					++k;
					break;
				}
			}

			if (b) {
				flip(s[i]);
				++k;
			}
		}
	}

	return k;
}

int main() {
	int N, T;
	string s, t;

	cin >> T;

	while (T--) {
		cin >> N;
		cin >> s;
		cin >> t;

		cout << simulate(N, s, t) << endl;
	}

	return 0;
}
