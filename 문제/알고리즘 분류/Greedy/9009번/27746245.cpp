#include <cstdio>
#include <stack>

using namespace std;

long long D[45];
stack<long long> s;

long long f(int n) {
	if (n < 2)
		return n;

	if (D[n] > 0)
		return D[n];

	return D[n] = f(n - 2) + f(n - 1);
}

void solve(long long n) {
	int m(0);
	long long k(f(m)), l(0);

	while (n > k) {
		l = k;
		k = f(m++);
	}

	if (n == f(m - 1)) {
		s.push(n);
		return;
	}

	s.push(l);

	solve(n - l);
}

void print() {
	while (!s.empty()) {
		printf("%lld ", s.top());
		s.pop();
	}
}

int main() {
	int T(0);

	scanf("%d", &T);

	for (int i(0); i < T; ++i) {
		long long n(0);

		scanf("%lld", &n);

		solve(n);
		print();
		printf("\n");
	}

	return 0;
}
