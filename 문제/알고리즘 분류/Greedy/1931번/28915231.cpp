#include <algorithm>
#include <cstdio>
#include <utility>

using namespace std;

bool compare(pair<int, int>& l, pair<int, int>& r) {
    if (l.second == r.second)
        return l.first < r.first;

    return l.second < r.second;
}

int main() {
    int j(0), m(1), N;
    pair<int, int>* A;

    scanf("%d", &N);

    A = new pair<int, int>[N];

    for (int i(0); i < N; ++i)
        scanf("%d %d", &A[i].first, &A[i].second);

    sort(A, A + N, compare);

    for (int i(1); i < N; ++i) {
        if (A[j].second <= A[i].first) {
            ++m;
            j = i;
        }
    }

    printf("%d \n", m);

    delete[] A;

    return 0;
}
