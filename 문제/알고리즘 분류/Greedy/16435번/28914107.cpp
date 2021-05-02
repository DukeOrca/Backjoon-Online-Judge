#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int N, L;
    int* h;

    scanf("%d %d", &N, &L);

    h = new int[N];

    for (int i(0); i < N; ++i)
        scanf("%d", &h[i]);

    sort(h, h + N);

    for (int i(0); i < N; ++i) {
        if (h[i] <= L)
            ++L;
    }

    printf("%d \n", L);

    delete[] h;

    return 0;
}
