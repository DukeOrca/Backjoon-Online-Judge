#include <cstdio>
#include <vector>

using namespace std;

typedef struct Flower {
	short begin, end;
} flower;

bool b;
int n;

void solve(short end, vector<flower> v) {
	short max(0);
	vector<flower> u;

	for (auto& it : v) {
		if (it.begin <= end) {
			if (it.end > max)
				max = it.end;
		} else
			u.push_back(it);
	}

	if (max > 1130) {
		++n;
		b = true;
		return;
	}

	if (max == 0) {
		b = false;
		return;
	}

	++n;

	solve(max, u);
}

int main() {
	int N(0);
	vector<flower> v;

	scanf("%d", &N);

	for (int i(0); i < N; ++i) {
		short a, b, c, d;

		scanf("%hd %hd %hd %hd", &a, &b, &c, &d);
		
		v.push_back(flower({ a * 100 + b, c * 100 + d }));
	}

	solve(301, v);

	if (b)
	    printf("%d \n", n);
	else
		printf("0 \n");

	return 0;
}
