#include <cstdio>
#include <algorithm>
using namespace std;

char buf[1<<20];
int idx = 1<<20;

inline char read()
{
	if (idx == 1<<20)
	{
		fread(buf, 1, 1<<20, stdin);
		idx = 0;
	}
	return buf[idx++];
}
inline int readInt()
{
	int sum = 0;
	char nw = read();
	
	while (nw == ' ' || nw == '\n') nw = read();
	while (nw >= '0' && nw <= '9')
	{
		sum = sum*10 + nw-48;
		nw = read();
	}
	
	return sum;
}
int main()
{
	int n = readInt();
	
	int a, b, c, d;
	int pos = 0;
	pair<int,int> p[n];
	for (int i = 0; i < n; ++i)
	{
		a = readInt();
		b = readInt();
		c = readInt();
		d = readInt();
		if (a*100+b < c*100+d)
		{
			p[pos].first = a*100+b;
			p[pos].second = c*100+d;
			pos++;
		}
	}
	
	sort(p, p+pos);
	
	int ans = 0;
	int max = 0;
	int flg = 0;
	int rng = 301;
	for (int i = 0; i < pos; ++i)
	{
		if (p[i].first > rng)
		{
			rng = max < rng ? rng : max;
			max = rng;
			flg = 0;
		}
		if (p[i].first <= rng && rng < 1201)
		{
			if (!flg) ans++, flg = 1;
			max = p[i].second > max ? p[i].second : max;
		}
	}
	
	printf("%d", max >= 1201 ? ans : 0);
	
	return 0;
}
