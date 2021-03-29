#include <iostream>
using namespace std;

const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int dp[370], best[370];
const int inf = 99999;

int conv(int m, int d)
{
	int ret = d;
	for (int i = 0; i < m - 1; i++)
		ret += days[i];
	return ret;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int first = conv(3, 1);
	int last = conv(11, 30);
	int a = conv(12, 31);

	int n, i, j;
	for (i = first + 1; i <= a; i++)
		best[i] = dp[i] = inf;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		int sm, sd, em, ed;
		cin >> sm >> sd >> em >> ed;
		int s = conv(sm, sd);
		int e = conv(em, ed);
		if (s < best[e])
			best[e] = s;
	}

	for (i = first; i <= a; i++)
	{
		for (j = best[i] + 1; j <= i; j++)
			if (dp[j] > dp[best[i]])
				dp[j] = dp[best[i]] + 1;
	}

	cout << (dp[last + 1] == inf ? 0 : dp[last + 1]);
}
