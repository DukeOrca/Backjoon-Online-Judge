#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T(1);

	while (true) {
		string s;

		cin >> s;

		if (s[0] == '-')
			return 0;

		stack<char> t;

		for (auto& it : s) {
			if (it == '{')
				t.push(it);
			else if (it == '}') {
				if (t.empty())
					t.push(it);
				else if (t.top() == '{')
					t.pop();
				else
					t.push(it);
			}
		}

		if (t.empty())
			cout << T++ << ". 0" << endl;
		else {
			int m(0);

			while (!t.empty()) {
				char u(t.top()); t.pop();
				char v(t.top()); t.pop();

				if (u == v)
					++m;
				else
					m += 2;
			}

			cout << T++ << ". " << m << endl;
		}
	}

	return 0;
}
