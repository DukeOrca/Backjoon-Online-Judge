#include <cstdio>

int N, n[1000001];

int main() {
	int T(0), max(0);
	long long m(0);

	scanf("%d", &T);

	while (T--) {
		scanf("%d", &N);

		for (int i(0); i < N; ++i)
			scanf("%d", n + i);

		m = 0;
		max = 0;

		for (int i(N - 1); i >= 0; --i) {
			if (max < n[i])
				max = n[i];
			else if (max > n[i])
				m += max - n[i];
		}

		printf("%lld \n", m);
	}

	return 0;
}
