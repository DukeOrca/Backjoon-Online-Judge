#include <iostream>
#include <string>

#define MIN(a, b) (a < b ? a : b)

using namespace std;

int N;
string t;

void push(int i, string &s) {
	if (i > 0)
		s[i - 1] = s[i - 1] == '0' ? '1' : '0';

	s[i] = s[i] == '0' ? '1' : '0';

	if (i < N - 1)
		s[i + 1] = s[i + 1] == '0' ? '1' : '0';
}

int simulate(string s) {
	int j(0);

	for (int i(0); i < N - 1; ++i) {
		if (s[i] != t[i]) {
			push(i + 1, s);
			++j;
		}
	}

	if (s.compare(t) == 0)
		return j;
	else
		return -1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m(-1), n(-1);
	string s;

	cin >> N;
	cin >> s;
	cin >> t;

	m = simulate(s);
	push(0, s);
	n = simulate(s);

	if (n != -1)
		++n;

	if (m != -1 && n != -1)
		cout << MIN(m, n) << endl;
	else if (m != -1)
		cout << m << endl;
	else if (n != -1)
		cout << n << endl;
	else
		cout << -1 << endl;

	return 0;
}
