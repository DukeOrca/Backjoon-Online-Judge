#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int j(0), N, M, K;
    int* A;

    scanf("%d %d %d", &N, &M, &K);

    if (M + K - 1 > N || N > M* K) {
        printf("-1 \n");

        return 0;
    }

    A = new int[N];

    for (int i(0); i < N; ++i)
        A[i] = i + 1;

    for (int i(1); i <= M; ++i) {
        int m(min(j + K, N - M + i));

        reverse(A + j, A + m);
        j = m;
    }

    for (int i(0); i < N; ++i)
        printf("%d ", A[i]);

    delete[] A;

    return 0;
}
