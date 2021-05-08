#include <cstdio>

int main() {
    int N, K;

    scanf("%d %d", &N, &K);

    for (int i(1); i <= K; ++i)
        N -= i;

    if (N < 0) {
        printf("-1 \n");
        return 0;
    }

    if (N % K == 0)
        printf("%d \n", K - 1);
    else
        printf("%d \n", K);

    return 0;
}
