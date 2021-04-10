#include <cstdio>

int main() {
	int N(0);

	scanf("%d", &N);

	for (int i(0); i < 1667; ++i) {
		for (int j(0); j < 1001; ++j) {
			if (i * 3 + j * 5 == N) {
				printf("%d \n", i + j);
				return 0;
			}
		}
	}

	printf("-1 \n");

	return 0;
}
