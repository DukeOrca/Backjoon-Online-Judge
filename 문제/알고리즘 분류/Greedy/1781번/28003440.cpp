#include <algorithm>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int N(0), max(0);

	scanf("%d", &N);

	vector<pair<int, int>> v(N);

	for (int i(0); i < N; ++i) {
		scanf("%d %d", &v[i].first, &v[i].second);
		
		--v[i].first;
	}

	sort(v.begin(), v.end());

	int n(N - 1);
	priority_queue<int> pq;

	for (int i(N - 1); i >= 0; --i) {
		while (n >= 0 && v[n].first == i)
			pq.push(v[n--].second);

		if (!pq.empty()) {
			max += pq.top();
			pq.pop();
		}
	}
	
	printf("%d \n", max);

	return 0;
}
