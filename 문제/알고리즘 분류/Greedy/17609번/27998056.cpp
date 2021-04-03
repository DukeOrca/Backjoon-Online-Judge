#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T(0), k(0);
	string in;

	cin >> T;

	while (T--) {
		cin >> in;

		int length(in.length());

		k = 0;

		for (int i(0), j(length - 1); i - 1 < j + 1; ++i, --j) {
			if (in[i] == in[j])
				continue;

			if (in[i] != in[j - 1] && in[i + 1] != in[j]) {
				k = 2;
				break;
			}

			if (in[i] != in[j - 1]) {
				++j, ++k;
				continue;
			}

			if (in[i + 1] != in[j])
				--i, ++k;
		}

		cout << k << endl;
	}

	return 0;
}
