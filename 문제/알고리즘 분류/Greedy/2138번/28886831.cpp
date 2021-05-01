#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T;
    int W(0), B(0);
    string s, t;

    cin >> T;
    while (T--)
    {
        cin >> N >> s >> t;

        for (int i(0); i < N; ++i) {
            if (s.at(i) != t.at(i)) {
                if (s.at(i) == 'W')
                    ++W;
                else
                    ++B;
            }
        }

        if (W > B)
            cout << W << endl;
        else
            cout << B << endl;

        W = 0;
        B = 0;
    }

    return 0;
}
