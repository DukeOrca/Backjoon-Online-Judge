#include <cstdio>
#include <stack>

using namespace std;

int main() {
	int m(0), K(0);
	long long n(0);
	stack<int> s;

	scanf("%d", &K);

	for (int i(0); i < K; ++i) {
		scanf("%d", &m);

		if (m == 0) 
			s.pop();
		else
			s.push(m);
	}

	while (!s.empty()) {
		n += s.top();
		s.pop();
	}

	printf("%lld \n", n);

	return 0;
}
