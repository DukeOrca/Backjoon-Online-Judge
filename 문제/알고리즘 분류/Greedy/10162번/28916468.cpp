#include <cstdio>

int main() {
    int A, B, C, T;

    scanf("%d", &T);

    A = T / 300;
    T -= A * 300;

    B = T / 60;
    T -= B * 60;

    C = T / 10;
    T -= C * 10;

    if (T == 0)
        printf("%d %d %d \n", A, B, C);
    else
        printf("-1 \n");

    return 0;
}
