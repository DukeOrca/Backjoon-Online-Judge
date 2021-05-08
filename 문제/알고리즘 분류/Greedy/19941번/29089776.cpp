#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m(0), N, K;
    string s;

    cin >> N >> K >> s;

    for (int i(0); i < N; ++i) {
        if (s[i] == 'P') {
            for (int j(i - K); j <= i + K; ++j) {
                if (j >= N)
                    break;

                if (j < 0)
                    continue;

                if (s[j] == 'H') {
                    s[j] = ' ';
                    ++m;
                    break;
                }
            }
        }
    }

    cout << m << endl;

    return 0;
}
