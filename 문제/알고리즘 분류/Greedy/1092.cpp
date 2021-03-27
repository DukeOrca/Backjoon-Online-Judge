#include <algorithm>
#include <cstdio>

using namespace std;

int M, N, m[10001], n[51];

int main() {
	bool end(true);
	int s(0), t(0);

	scanf("%d", &N);

	for (int i(0); i < N; ++i)
		scanf("%d", &n[i]);

	scanf("%d", &M);

	for (int i(0); i < M; ++i)
		scanf("%d", &m[i]);

	sort(m, m + M, greater<int>());
	sort(n, n + N, greater<int>());

	if (m[0] > n[0]) {
		printf("-1 \n");
		return 0;
	}

	for (int i(0); i < 10001; ++i) {
		end = true;
		s = 0;

		for (int j(0); j < N; ++j) {
			for (int k(s); k < M; ++k) {
				if (m[k] == -1)
					continue;

				if (n[j] >= m[k]) {
					m[k] = -1;
					end = false;
					s = k;
					break;
				}
			}
		}

		if (end)
			break;

		++t;
	}

	if (t == 0)
		t = -1;

	printf("%d \n", t);

	return 0;
}
