#include <cstdio>

int main() {
	char s[2001];
	int T(1);

	while (scanf("%s", s), s[0] != '-') {
		int m(0), n(0);

		for (int i = 0; s[i]; i++) {
			if (s[i] == '{')
				++m;
			else {
				if (m == 0) {
					++m; 
					++n; 
				} else
					--m;
			}
		}

		printf("%d. %d\n", T++, n + m / 2);
	}
}
