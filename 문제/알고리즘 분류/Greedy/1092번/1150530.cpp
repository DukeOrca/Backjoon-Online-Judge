#include <algorithm>
#include <cstdio>

using namespace std;

int M, N, l[50], m[10000], n[50];

int main() {
	bool k(false);
	int i(0), j(0), t(0);

	scanf("%d", &N);

	for (i = 0; i < N; ++i)
		scanf("%d", &n[i]);

	scanf("%d", &M);

	for (i = 0; i < M; ++i)
		scanf("%d", &m[i]);

	sort(m, m + M, greater<int>());
	sort(n, n + N, greater<int>());

	if (n[0] < m[0])
		t = -1;
	else {
		t = 1;

		for (i = 0; i < M; i++) {
			k = false;

			while (!k) {
				for (j = 0; j < N; j++) {
					if (m[i] > n[j])
						continue;

					if (l[j] < t) {
						l[j]++;
						k = true;

						break;
					}
				}

				if (j == N)
					++t;
			}
		}
	}

	printf("%d \n", t);

	return 0;
}
