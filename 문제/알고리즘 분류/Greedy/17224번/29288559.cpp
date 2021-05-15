#include <cstdio>

int main() {
	int score(0), N, L, K;

	scanf("%d %d %d", &N, &L, &K);

	while (K--) {
		int sub1, sub2;

		scanf("%d %d", &sub1, &sub2);

		if (sub2 <= L)
			score += 140;
		else if (sub1 <= L)
			score += 100;
	}

	printf("%d \n", score);
	
	return 0;
}
