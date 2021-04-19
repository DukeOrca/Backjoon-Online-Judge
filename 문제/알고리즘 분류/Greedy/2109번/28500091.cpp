#include <algorithm>
#include <cstdio>
#include <queue>

using namespace std;

int main() {
	int m(0), n(0);
	priority_queue<int> pq;

	scanf("%d", &n);

	pair<int, int>* pd = new pair<int, int>[++n];

	for (int i(1); i < n; ++i)
		scanf("%d %d", &pd[i].second, &pd[i].first);

	sort(pd, pd + n);

	int k(pd[--n].first);

	for (int i(k); i > 0; --i) {
		while (n >= 0 && pd[n].first == i)
			pq.push(pd[n--].second);

		if (!pq.empty()) {
			m += pq.top();
			pq.pop();
		}
	}

	printf("%d \n", m);

	return 0;
}
