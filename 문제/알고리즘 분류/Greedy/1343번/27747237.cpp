#include <iostream>
#include <string>

using namespace std;

string answer, board;

int main() {
	cin >> board;

	int j(0);

	for (int i(0); i < board.length(); ++i) {
		if (board.at(i) == 'X')
			++j;

		if (j == 4) {
			answer += "AAAA";
			j = 0;
		}

		if (board.at(i) == '.') {
			if (j == 2) {
				answer += "BB.";
				j = 0;
			} else if (j) {
				printf("-1");
				return 0;
			} else 
				answer += ".";
		}

		if (i == board.length() - 1) {
			if (j == 2) {
				answer += "BB";
				j = 0;
			} else if (j) {
				printf("-1");
				return 0;
			}
		}
	}

	cout << answer << endl;

	return 0;
}
