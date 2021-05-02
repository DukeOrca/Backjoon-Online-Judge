#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int N;
    int* A;

    scanf("%d", &N);

    A = new int[N];

    for (int i(0); i < N; ++i)
        scanf("%d", &A[i]);

    sort(A, A + N);

    printf("%d \n", A[(N - 1) / 2]);

    delete[] A;

    return 0;
}
