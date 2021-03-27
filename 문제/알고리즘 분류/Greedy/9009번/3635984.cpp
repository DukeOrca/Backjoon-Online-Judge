#include <cstdio>

int m[45];
long long f[45] = { 1, 1, };

int main() {

	for (int i = 2; i < 46; i++)
		f[i] = f[i - 2] + f[i - 1];

	int T(0);

	scanf("%d", &T);

	while (T--) {
		int j(0), n(0);

		scanf("%d", &n);

		for (int i(45); i >= 0; i--) {
			if (n >= f[i]) {
				m[j++] = f[i];
				n -= f[i];
			}
		}

		for (int i(j - 1); i >= 0; --i)
			printf("%d ", m[i]);

		printf("\n");
	}

	return 0;
}
