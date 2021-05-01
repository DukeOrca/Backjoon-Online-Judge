#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int m(0), N, K, *A;

    scanf("%d %d", &N, &K);

    A = new int[N];

    for (int i(N - 1); i >= 0; --i)
        scanf("%d", &A[i]);

    for (int i(0); i < N; ++i) {
        int j(K / A[i]);

        K -= j * A[i];
        m += j;
    }

    printf("%d \n", m);

    delete[] A;

    return 0;
}
