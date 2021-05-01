#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int m(0), N;

    scanf("%d", &N);

    int *C(new int[N]);
    
    for (int i(0); i < N; ++i)
        scanf("%d", &C[i]);

    sort(C, C + N, greater<>());

    for (int i(0); i < N; ++i) {
        m += C[i];

        if ((i + 1) % 3 == 0)
            m -= C[i];
    }

    printf("%d \n", m);

    return 0;
}
