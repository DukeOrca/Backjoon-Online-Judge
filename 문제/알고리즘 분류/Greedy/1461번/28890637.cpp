#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int j, m(0), N, M;
    vector<int> u, v;

    scanf("%d %d", &N, &M);

    for (int i(0); i < N; ++i) {
        scanf("%d", &j);

        if (j < 0)
            u.push_back(j);
        else
            v.push_back(j);
    }

    sort(u.begin(), u.end());
    sort(v.begin(), v.end(), greater<>());

    for (int i(0); i < u.size(); ++i) {
        if (i % M == 0)
            m -= u[i] * 2;
    }

    for (int i(0); i < v.size(); ++i) {
        if (i % M == 0)
            m += v[i] * 2;
    }

    if (u.empty())
        u.push_back(0);
    else if (v.empty())
        v.push_back(0);

    m -= max(-u[0], v[0]);

    printf("%d \n", m);

    return 0;
}
