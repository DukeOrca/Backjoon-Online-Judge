#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int N(0);
	long long max(0);
	
	scanf("%d", &N);

	int* A = new int[N];

	for (int i(0); i < N; ++i)
		scanf("%d", &A[i]);

	sort(A, A + N, greater<int>());

	for (int i(0); i < N; ++i) {
		int a(A[i] - i);

		if (a < 1)
			break;
		else
			max += a;
	}

	printf("%lld \n", max);

	delete[] A;

	return 0;
}
